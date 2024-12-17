#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введіть перше число: ");
    scanf("%d", &a);
    
    printf("Введіть друге число: ");
    scanf("%d", &b);
    
    printf("Залишок від ділення першого числа на друге: %d\n", a % b);
    printf("Різниця другого числа і першого: %d\n", b - a);
    printf("Сума чисел у квадраті: %d\n", (a + b) * (a + b));
    
    return 0;
}
