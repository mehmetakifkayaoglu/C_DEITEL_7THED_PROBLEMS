// Ask sales
// 
// Enter a loop if the sales is not equal to -1
//
//      divide sels with 100 and mult with 9 and add 200
//      show salary
//      
//      ask sales

#include <stdio.h>

int main (void)
{
    float sales;

    printf("Enter sales (-1 to stop) : ");
    scanf("%f",&sales);

    while ( sales != -1 )
    {
        float salary = 200 + sales/100*9;
        printf("Salary : %.2f\n\n", salary);

        printf("Enter sales : ");
        scanf("%f",&sales);
    }
    return 0;
}