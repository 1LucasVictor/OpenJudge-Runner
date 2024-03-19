#include <stdio.h>

int main(void)
{
  char x[1000] = {0};
  int sum = 0;
  int i;

  while(1){
    scanf("%s", x);

    if(x[0] == '0')
      break;

    for(i = 0; i < 1000; i++)
      switch(x[i]){
       case '0' : sum += 0;  break;
       case '1' : sum += 1;  break;
       case '2' : sum += 2;  break;
       case '3' : sum += 3;  break;
       case '4' : sum += 4;  break;
       case '5' : sum += 5;  break;
       case '6' : sum += 6;  break;
       case '7' : sum += 7;  break;
       case '8' : sum += 8;  break;
       case '9' : sum += 9;  break;
      }

    printf("%d\n", sum);

    sum = 0;
  }

  return 0;
}