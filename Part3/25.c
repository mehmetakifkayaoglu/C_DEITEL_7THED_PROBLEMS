#include <stdio.h>

int main(void) {
  int a;
    printf("A\tA+2\tA+4\tA+6\n");
  for (int i = 1; i <= 5; i++) {
    a = 3 * i;
    printf("%d\t%d\t%d\t%d\n", a, a+2, a+4, a+6);
  }
  return 0;
}
