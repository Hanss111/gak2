#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10  // розмір масивуу

void initArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 201 - 100;  
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int productOfNonZeroElements(int arr[], int size) {
    int product = 1;
    int foundNonZero = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            product *= arr[i];
            foundNonZero = 1;
        }
    }
    
    return foundNonZero ? product : 0;  
}

int sumOfAbsoluteValuesAfterNegative(int arr[], int size) {
    int sum = 0;
    int foundNegative = 0;
    
    for (int i = 0; i < size; i++) {
        if (foundNegative) {
            sum += abs(arr[i]);  
        }
        if (!foundNegative && arr[i] < 0) {
            foundNegative = 1;  
        }
    }
    
    return sum;
}

int main() {
    srand(time(NULL));  
    
    int arr[N];
    
    initArray(arr, N);
    printf("Масив: ");
    printArray(arr, N);
    
    int product = productOfNonZeroElements(arr, N);
    printf("Добуток ненульових елементів масиву: %d\n", product);
    
    int sum = sumOfAbsoluteValuesAfterNegative(arr, N);
    printf("Сума модулів елементів після першого від'ємного елемента: %d\n", sum);
    
    return 0;
}
