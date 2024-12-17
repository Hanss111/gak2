#include <stdio.h>

int main() {
    int n = 3, m = 4;
    int A[3][4] = {{3, -2, 4, 9}, {0, 3, 10, 3}, {5, -4, -6, 0}};
    int max, min;
    int sum_max_min;

    max = A[0][0];
    min = A[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }

    sum_max_min = max + min;
    float average = (float)sum_max_min / 2;

    printf("\nМаксимальний елемент: %d\n", max);
    printf("Мінімальний елемент: %d\n", min);
    printf("Середнє арифметичне максимального та мінімального елементів: %.2f\n", average);

    return 0;
}
