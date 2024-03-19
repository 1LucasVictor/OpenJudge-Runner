#include <stdio.h>
#include <string.h>
//prototype
int main(void);

int main(void){
  char number_str[1000];
  int digit_count;
  int sum = 0;
  int num = 0;
  int i;

  while (1) {
    scanf("%s", &number_str);

    //exit condition
    if (number_str[0] == '0') {
      break;
    }

    digit_count = strlen(number_str);

    for (i = 0; i < digit_count; i++) {
      num = number_str[i] - '0';
      sum += num;
    }

    printf("%d\n", sum);
    sum = 0;
  }

  return 0;
}

