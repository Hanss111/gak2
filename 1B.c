#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) printf("Рівносторонній\n");
    else if (a == b || b == c || a == c) printf("Рівнобедрений\n");
    else printf("Різносторонній\n");
    return 0;
}