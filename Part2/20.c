#include <stdio.h>

float pi = 3.14159;
float r;

int main (void)
{
    printf("Enter radius : ");
    scanf("%f", &r);

    printf("Area : %f\nCircumference : %f", pi*r*r, 2*pi*r);
    return 0;
}