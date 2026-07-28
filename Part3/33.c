#include <stdio.h>

int main(void) {
  int a;
  printf("Enter an integer : ");
  scanf("%d", &a);

  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {

      if ( 0 < i && i < a - 1 && 0 < j && j < a - 1 ) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    puts("");
  }
  return 0;
}
