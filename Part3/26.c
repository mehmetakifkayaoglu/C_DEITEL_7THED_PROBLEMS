#include <stdio.h>

int main (void)
{
    int counter, number, largest, second_largest;

    counter = 10;
    largest = 0;
    second_largest = 0;

    for ( int i = 0; i < counter; i++){
        printf("Enter Sales : ");
        scanf("%d", &number);
        if ( number > second_largest && number < largest){
            second_largest = number;
        }else if ( number > largest ){
            second_largest = largest;
            largest = number;
        }
    }
    printf("Largest is %d\n", largest);
    printf("Second Largest is %d\n", second_largest);

    return 0;
}
