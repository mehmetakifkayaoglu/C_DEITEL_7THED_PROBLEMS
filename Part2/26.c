#include <stdio.h>

int a, b;

int main (void)
{
    printf("Enter two intager : ");
    scanf("%d%d", &a, &b);

    if( a / b == 2 && a % b == 0){
        printf("%d is twice as much as %d", a, b);
    }
    return 0;
}