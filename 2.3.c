#include <stdio.h>

int main() {
    int x, y;
    float f;
    
    printf("Введіть значення x: ");
    scanf("%d", &x);
    
    printf("Введіть значення y: ");
    scanf("%d", &y);
    
    f = (float)(x + y) / (x*x + x*y + y*y) + (float)x / (1 + y*y) + (float)y / (1 + x*x);
    
    printf("Значення функції f = %.2f\n", f);

    return 0;
}
