#include <stdio.h>

int a;

int main (void)
{
    printf("Enter an integer: ");
    scanf("%d", &a);
    if( a % 2){
        printf("%d is Odd", a);
    }else{
        printf("%d is Even", a);
    }
    return 0;
}