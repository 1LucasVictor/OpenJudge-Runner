#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * Include_Number(char *);

#define MAX 398
int main() {
  char stack[MAX];
  int i,j=0;
  int number[100];
  int len_number;
  char type[99];
  int len_stack;
  int result=0;
  int s,t;

  //一行の入力
  fgets(stack,MAX,stdin);
  //printf("%s\n",stack);
  len_stack = strlen(stack);
  //printf("%d\n",len_stack);

  for(i=0;i<len_stack;i++) {
    if(stack[i] >=48 && stack[i] <= 57) {
      number[j] = atoi(&stack[i]);
      j++;
    }

    switch(stack[i]) {
    case 43: //"+"
      for(t=0;t<j;t++) {
        result = result + number[t];
        //number[t] = 0;
      }
      break;
    case 45: //"-"
      for(t=0;t<j;t++) {
        result = result - number[t];
        //number[t] = 0;
      }
      break;
    case 42: //"*"
      for(t=0;t<j;t++) {
        result = result * number[t];
        //number[t] = 0;
      }
      break;
    }
  }


  /*数字をnumberに入れる*/
  /*for(i=0;i<j;i++) {
    printf("%d",number[i]);
  }*/

  printf("%d\n",result);

  return 0;
}

