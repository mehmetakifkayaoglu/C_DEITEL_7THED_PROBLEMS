// Written with integers so the calculation is wrong.
// This will be fixed in next parts :)

#include <stdio.h>

int w, l;

int main (void)
{
    printf("Enter Weight (kg): ");
    scanf ("%d", &w);

    printf("Enter length (m): ");
    scanf ("%d", &l);

    int VKI = w / (l * l);

    printf("Your VKI : %d\n", VKI);

    if(VKI < 18.5){
        printf("Underweight");
    }else if(VKI < 24.9){
        printf("Normal");
    }else  if(VKI < 29.9){
        printf("Overweight");
    }else{
        printf("Obese");
    }
    return 0;
}