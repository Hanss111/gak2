#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100;
    }
}

void outputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int productEvenIndexElements(int *arr, int n) {
    int product = 1;
    for (int i = 0; i < n; i += 2) {
        product *= arr[i];
    }
    return product;
}

int sumBeforeMaxElement(int *arr, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > abs(arr[maxIndex])) {
            maxIndex = i;
        }
    }

    int sum = 0;
    for (int i = 0; i < maxIndex; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    srand(time(NULL));

    int n;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);

    printf("Масив: ");
    outputArray(arr, n);

    int product = productEvenIndexElements(arr, n);
    printf("Добуток елементів масиву з парними номерами: %d\n", product);

    int sum = sumBeforeMaxElement(arr, n);
    printf("Сума елементів до максимального за модулем елемента: %d\n", sum);

    return 0;
}
