#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, result;

    while (1) {
        printf("Введіть значення x, y та z (x, y, z - числа): ");
        scanf("%lf %lf %lf", &x, &y, &z);

        if (x + y + z <= 0) {
            printf("Помилка: не можна обчислити логарифм для числа, меншого або рівного нулю.\n");
        } else if (x * x * y - z < 0) {
            printf("Помилка: не можна обчислити корінь з від'ємного числа.\n");
        } else {
            result = sqrt(x * x * y - z) + log2(x + y + z);
            printf("Результат обчислення: %.4lf\n", result);
            break;
        }
    }

    return 0;
}
