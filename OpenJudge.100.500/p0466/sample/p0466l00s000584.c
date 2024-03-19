#include<stdio.h>
#include<string.h>
int main(void){
  char a[11];
  char b[11];
  int len;
  scanf("%s",a);
  scanf("%s",b);
  len = strlen(a);
  b[len]='\0';
  if(strcmp(a,b)==0)
    printf("Yes");
  else
    printf("No");
  return 0;
}