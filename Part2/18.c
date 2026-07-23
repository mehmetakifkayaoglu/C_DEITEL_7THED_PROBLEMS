#include <stdio.h>

int a , b;
int main ()
{
    puts("Enter two numbers;");
    scanf("%d%d",&a , &b );
    if ( a > b){
        printf("%d is larger", a);
    }else if( a == b ){
        printf("Numbers are equal!");
    }else{
        printf("%d is larger", b);
    }
    return 0;
}