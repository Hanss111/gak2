#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("Введіть розмір квадратної матриці: ");
    scanf("%d", &n);

    float matrix[n][n];
    float min = 101;

    srand(time(0));

    printf("Згенерована матриця:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 201) - 100;
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("\nМінімальний елемент вище бічної діагоналі: %.2f\n", min);

    return 0;
}
