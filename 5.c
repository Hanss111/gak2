#include <stdio.h>

int main() {
    int n;

    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("Введіть елементи масиву a:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Введіть елементи масиву b:\n");
    for (int i = 0; i < n; i++) {
        printf("b[%d] = ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
    }

    printf("\nРезультат (масив c):\n");
    for (int i = 0; i < n; i++) {
        printf("c[%d] = %d\n", i + 1, c[i]);
    }

    return 0;
}
