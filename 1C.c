#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) printf("Можна\n");
    else printf("Не можна\n");
    return 0;
}


// Перевірка можливості побудови трикутника

