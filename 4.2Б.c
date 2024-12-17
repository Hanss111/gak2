#include <stdio.h>

int main() {
    int sum = 0, count = 0, i = 2;

    while (i <= 100) {
        sum += i;
        count++;
        i += 2;
    }

    double average = (double)sum / count;
    printf("Середнє арифметичне всіх парних чисел в діапазоні [1; 100]: %.2lf\n", average);

    return 0;
}
