#include<stdio.h>
#include<string.h>
int main(void){
  char a[4];
  char b[4]="ABC";
  char c[4]="ARC";
  scanf("%s",a);
  if (strcmp(a,b)==0){
    printf("ARC\n");
  }
  if(strcmp(a,c)==0){
    printf("ABC\n");
  }
  return 0;
}
