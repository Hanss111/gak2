#include <stdio.h>

int countSignChanges(int *arr, int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((*(arr + i - 1) > 0 && *(arr + i) < 0) || (*(arr + i - 1) < 0 && *(arr + i) > 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int result = countSignChanges(a, n);
    printf("Кількість ділянок, де змінюється знак: %d\n", result);
    
    return 0;
}
