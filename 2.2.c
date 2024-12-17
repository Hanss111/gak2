#include <stdio.h>

int main() {
    float a = 5, b = -2, c = 3, y;

    y = (3*a - 4*b + 5*c) / (a*b + 2*b*c + 3*a*c) - (a*b - c) / 4;

    printf("Значення функції y = %.2f\n", y);

    return 0;
}
