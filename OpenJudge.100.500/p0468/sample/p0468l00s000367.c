#include<stdio.h>
#include<string.h>

int main(void){
  char a[5];
  char b[] = "ABC";
  char c[] = "ARC";
  scanf("%s\n",a );
  if(strcmp(a,b) == 0) printf("%s\n", c);
  if(strcmp(a,c) == 0) printf("%s\n", b);
  return 0;
}