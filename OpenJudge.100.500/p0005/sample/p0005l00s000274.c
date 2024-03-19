#include<stdio.h>

int main(void){
  int i;
  char str[20]={0};
  int stringdigit;
  
  str[0]=getchar();
  for(i=0;str[i]!=EOF && i<20;){
    i++;
    str[i]=getchar();
  }
  stringdigit=i;
  for(i=stringdigit-1;i>=0;i--){
    printf("%c",str[i]);
  }
  return 0;
}