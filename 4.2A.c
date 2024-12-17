#include <stdio.h>

int main() {
    int sum = 0, count = 0;

    for (int i = 2; i <= 100; i += 2) {
        sum += i;
        count++;
    }

    double average = (double)sum / count;
    printf("Середнє арифметичне всіх парних чисел в діапазоні [1; 100]: %.2lf\n", average);

    return 0;
}
