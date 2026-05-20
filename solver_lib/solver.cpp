
#include "solver.h"
#include <cmath>

void solve(float a, float b, float c, float& x1, float& x2) {
    float d = b * b - 4 * a * c;
    if (d >= 0) {
        x1 = (-b - sqrtf(d)) / (2 * a);
        x2 = (-b + sqrtf(d)) / (2 * a);
    } else {
        x1 = x2 = 0; // или другая обработка ошибки
    }
}
