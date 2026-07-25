#include <stdio.h>

int dest, price, av, park, road;

int main (void)
{
    printf("Enter Daily Road Driven :");
    scanf("%d", &dest);
    printf("Enter Gasoline liter price :");
    scanf("%d", &price);
    printf("Enter Average fuel consumption :");
    scanf("%d", &av);
    printf("Enter Daily parking cost :");
    scanf("%d", &park);
    printf("Enter Daily motorway toll :");
    scanf("%d", &road);

    int coast = dest*price*av + park + road;

    printf("Your fee is : %d", coast);
    return 0;
}