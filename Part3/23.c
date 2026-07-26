#include <stdio.h>

int main (void)
{
    int counter, number, largest;

    counter = 10;
    largest = 0;

    for ( int i = 0; i < counter; i++){
        printf("Enter Sales : ");
        scanf("%d", &number);
        if ( number > largest ){
            largest = number;
        }
    }
    printf("Largest is %d", number);
    return 0;
}
