// add this if block to 20th row

#include <stdio.h>

int main(void) {
  int result, student;

  while (student <= 10) {
    printf("%s", "Enter result ( 1=pass, 2=fail ): ");
    scanf("%d", &result);
    
    if (!(result == 1 || result == 2)) {
      continue;
    }

  }

  return 0;
}
