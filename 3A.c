#include <stdio.h>
#include <math.h>

int main() {
    int a;
    float c = 3; 
    float b;

    printf("Введіть значення a: ");
    scanf("%d", &a);

    (a == 2) ? b = (a * a - 4 * c) / (a * c) : (a == 4) ? b = sqrt(a * c - 2 * a) : (a == 6) ? b = c * c - 2 * a : printf("Невірне значення a\n");

    printf("Значення b = %.2f\n", b);

    return 0;
}
