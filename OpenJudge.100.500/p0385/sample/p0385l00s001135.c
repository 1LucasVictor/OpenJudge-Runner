#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

  int sum;
  char m;

  while(1){
    sum = 0;
    scanf("%c", &m);
    if(m=='0') break;
    while(m != '\n'){
      sum += m-48;
      scanf("%c", &m);
    }
    printf("%d\n", sum);
  }

  return 0;
}

