#include<stdio.h>
#include<stdlib.h>
#define L 1201

int main(void){

  int i;
  i=0;
  char str[L];

  scanf("%[^\n]", str);

  while(i < L){

    if(str[i] >= 65 && str[i] <= 90){
      str[i] += 32;
    }else if(str[i] >= 97 && str[i] <= 122){
      str[i] -= 32;
    }
    i++;
  }

  printf("%s\n", str);


  return 0;
}

