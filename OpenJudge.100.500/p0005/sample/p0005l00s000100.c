#include<stdio.h>

int main(void){
  int i,j,digit;
  char str[21]={0},ch;

  scanf("%s",str);
  for(i=0;i<20 && str[i]!=0;i++){}
  digit=i;
  str[digit]=0;
  for(i=0,j=digit-1;i<digit/2;i++,j--){
    ch=str[i];
    str[i]=str[j];
    str[j]=ch;
  }
  printf("%s",str);
  printf("\n");
  return 0;
}