#include<stdio.h>
int main(void){
char a[5];
  scanf("%s",a);
  if(a[1]=='B'){a[1]='R';}
  else{a[1]='B';}
  puts(a);
  return 0;
}
  