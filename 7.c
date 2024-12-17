#include <stdio.h>
#include <stdbool.h>

bool Even(int k) {
    return k % 2 == 0;
}

int main() {
    int arr[10];
    int evenCount = 0;

    printf("Введіть 10 цілих чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (Even(arr[i])) {
            evenCount++;
        }
    }

    printf("Кількість парних чисел: %d\n", evenCount);

    return 0;
}
