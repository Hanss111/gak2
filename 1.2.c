#include <stdio.h>

int main() {
    int x, y, r, D;
    scanf("%d %d %d", &x, &y, &r);
    D = (x - 1) * (x - 1) + y * y;
    if (D > r * r) {
        printf("Точка знаходиться поза колом.\n");
    } else {
        printf("Точка знаходиться всередині або на колі.\n");
    }
    return 0;
}
