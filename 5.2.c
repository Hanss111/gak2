#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, choice;
    
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);

    int arr[n];

    printf("Оберіть спосіб заповнення масиву:\n");
    printf("1. Ввести масив з клавіатури\n");
    printf("2. Заповнити масив випадковими числами\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введіть елементи масиву:\n");
        for (int i = 0; i < n; i++) {
            printf("arr[%d] = ", i + 1);
            scanf("%d", &arr[i]);
        }
    } else if (choice == 2) {
        srand(time(0));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 201 - 100;  
        }
        printf("Масив заповнений випадковими числами:\n");
        for (int i = 0; i < n; i++) {
            printf("arr[%d] = %d\n", i + 1, arr[i]);
        }
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nМаксимальний елемент масиву: %d\n", max);

    int first_positive = -1, second_positive = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (first_positive == -1) {
                first_positive = i;
            } else if (second_positive == -1) {
                second_positive = i;
                break;
            }
        }
    }

    if (first_positive != -1 && second_positive != -1) {
        int sum = 0;
        for (int i = first_positive + 1; i < second_positive; i++) {
            sum += arr[i];
        }
        printf("Сума елементів між першим і другим додатними елементами: %d\n", sum);
    } else {
        printf("Не знайдено двох додатних елементів для обчислення суми.\n");
    }

    return 0;
}
