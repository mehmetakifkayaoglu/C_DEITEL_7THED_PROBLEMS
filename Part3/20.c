// ask hours
// enter loop if hours not -1
//      ask hourly rate
//      if hours less then 40
//          mult hours with rate
//          show salary
//      else
//          mult 40 with rate
//          mult hours mines 40 with one and half times of rate
//          add these together
//          show salary
//      ask  hours

#include <stdio.h>

int main (void)
{
    int hours;
    float hourly_rate, salary;

    printf("Enter work hours :");
    scanf("%d", &hours);

    while ( hours != -1 )
    {
        printf("Enter Hourly Rate : ");
        scanf("%f", &hourly_rate);

        if ( hours < 40 ){
            salary = hours * hourly_rate;
        }else{
            salary = 40 * hourly_rate + (hours - 40) * hourly_rate * 3 / 2;
        }
        
        printf("Salary: %.2f $\n\n", salary);

        printf("Enter work hours :");
        scanf("%d", &hours);
    }
    return 0;
}
