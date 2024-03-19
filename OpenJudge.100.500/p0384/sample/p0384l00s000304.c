#include<stdio.h>
int main(void){
  char string[1800];
  int i=0;
  scanf("%[^\r\n]",string);
  while(string[i]!='\n'){
    if(string[i]>=65&&string[i]<=90)
      string[i++]+=32;
    else if(string[i]>=97&&string[i]<=122)
      string[i++]-=32;
    else
      i++;
  }
  printf("%s\n",string);
  return 0;
}