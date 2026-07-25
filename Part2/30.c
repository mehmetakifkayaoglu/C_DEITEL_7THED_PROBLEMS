#include <stdio.h>

int a;

int main (void)
{
    printf("Enter five digit intager : ");
    scanf("%d", &a);
    printf("%d ", a / 10000);
    a = a - (a / 10000) * 10000;
    printf("%d ", a / 1000);
    a = a - (a / 1000) * 1000;
    printf("%d ", a / 100);
    a = a - (a / 100) * 100;
    printf("%d ", a / 10);
    a = a - (a / 10) * 10;
    printf("%d", a);
    return 0;
}