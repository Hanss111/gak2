#include <stdio.h>
#include <math.h>

int main() {
    int a;
    float c = 3; 
    float b;

    printf("Введіть значення a: ");
    scanf("%d", &a);

    if (a == 2) {
        b = (a * a - 4 * c) / (a * c);
    } else if (a == 4) {
        b = sqrt(a * c - 2 * a);
    } else if (a == 6) {
        b = c * c - 2 * a;
    } else {
        printf("Невірне значення a\n");
        return 1; 
    }

    printf("Значення b = %.2f\n", b);

    return 0;
}
