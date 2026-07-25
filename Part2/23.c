#include <stdio.h>

int a, b, c;
int L, S;

int main (void)
{
    printf("Enter 3 integers");
    scanf("%d%d%d", &a, &b, &c);   

    if( a > c ){
        if( a > b ){
            L = a;
            if( b > c){
                S = c;
            }else{
                S = b;
            }
        }else{
            L = b;
            S = c;
        }
    }else{
        if( c > b ){
            L = c;
            if( b > a){
                S = a;
            }else{
                S = b;
            }
        }else{
            L = b;
            S = a;
        }
    }
    printf("Largest is: %d\nSmallest is: %d", L, S);
    return 0;
}