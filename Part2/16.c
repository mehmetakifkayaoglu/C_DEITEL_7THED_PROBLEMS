#include <stdio.h>

int a, b;

int main (void)
{
    puts( "Enter two numbers:");
    scanf ("%d%d" , &a ,&b );

    printf("Add: %d\nSub: %d\nMulti: %d\nDiv: %d\n", a + b, a - b, a * b, a /b);
    return 0;
}