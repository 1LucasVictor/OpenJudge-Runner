#include<stdio.h>

int main(void){
  int i,digit;
  char str[20]={0};
  str[0]=getchar();
  for(i=0;;){
    if(i>=20 || str[i]==EOF){
      digit=i;
      break;
    }
    i++;
    str[i]=getchar();
  }
  for(i=digit-1;i>=0;i--){
    printf("%c",str[i]);
    str[i]=0;
  }
  printf("\n");
  return 0;
}