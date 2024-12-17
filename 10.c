#include <stdio.h>

int main() {
    FILE *file;
    int number;
    int oddCount = 0;

    file = fopen("chuslo.txt", "r");
    if (file == NULL) {
        printf("Не вдалося відкрити файл.\n");
        return 1;
    }

    printf("Непарні числа у файлі:\n");

    while (fscanf(file, "%d", &number) != EOF) {
        if (number % 2 != 0) {
            printf("%d ", number);
            oddCount++;
        }
    }

    printf("\nКількість непарних чисел: %d\n", oddCount);

    fclose(file);
    return 0;
}
