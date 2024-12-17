#include <stdio.h>
#include <math.h>

int main() {
    double a, b, dx, x, y;

    printf("Введіть значення a (початкове значення x): ");
    scanf("%lf", &a);
    printf("Введіть значення b (кінцеве значення x): ");
    scanf("%lf", &b);
    printf("Введіть крок dx: ");
    scanf("%lf", &dx);

    if (a >= b || dx <= 0) {
        printf("Невірні значення для a, b або dx.\n");
        return 1;
    }

    printf("x\t\t\ty\n");
    printf("----------------------------\n");

    for (x = a; x <= b; x += dx) {
        if (2 * x < 0) {
            printf("Неможливо обчислити для x = %.2f (корінь з від'ємного числа)\n", x);
        } else {
            y = exp(sqrt(2 * x)) * pow(x, 2);
            printf("%.2f\t\t%.5f\n", x, y);
        }
    }

    return 0;
}
