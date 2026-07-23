#include <stdio.h>

int a, b, c;

int main ()
{
    printf("Enter three different integers ");
    scanf("%d%d%d", &a, &b, &c);
    int s, A, P, L, S;
    s = a + b + c;
    A = ( a + b + c)/3;
    P = a * b * c;
    if( a > b ){
        if( a > c){
            L = a;
            if ( b > c){
                S = c;
            }else{
                S = b;
            }
        }else{
            L = c;
            S = b;
        }
    }else{
        if( b > c){
            L = b;
            if ( a > c){
                S = c;
            }else{
                S = a;
            }
        }else{
            L = c;
            S = a;
        }
    }
    printf("Sum is %d\nAverage is &d\nProduct is %d\nLargest is %d\nSmallest is %d\n", s, A, P, L, S);
    return 0;
}