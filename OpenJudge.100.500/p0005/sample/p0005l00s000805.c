#include<stdio.h>
#include<string.h>
int main(void){
  int n,i;
  char w[100];
  scanf("%s",w);
  n=strlen(w);
  for(i=n-1;i>=0;i--){putchar(w[i]);}
  printf("\n");
  return 0;
}