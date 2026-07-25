// Ask money
// 
// Enter a loop if the money is not equal to -1
//
//      ask ratio
//      ask days
//      calc interest
//      show interest 
//      
//      ask money

#include <stdio.h>

int main (void)
{
    float money, ratio, day, interest;

    printf("Enter Main Money (-1 to stop) : ");
    scanf("%f",&money);

    while ( money != -1 )
    {
        printf("Enter Ratio : ");
        scanf("%f", &ratio);

        printf("Enter how long (days) : ");
        scanf("%f", &day);
        
        interest = money * ratio * day / 365;
        printf("INterest : %.2f\n\n", interest);

        printf("Enter Main Money : ");
        scanf("%f",&money);
    }
    return 0;
}