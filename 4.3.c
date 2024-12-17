#include <stdio.h>

int main() {
    int n, x, sum = 0;

    printf("Введіть значення n (натуральне число): ");
    scanf("%d", &n);
    printf("Введіть значення x (ціле число): ");
    scanf("%d", &x);

    int sum_j = (n - 1) * (n + 2) / 2;

    for (int i = 1; i <= n; i++) {
        sum += (x + i) * (n - 1) + sum_j;
    }

    printf("Результат обчислення: %d\n", sum);
    return 0;
}
