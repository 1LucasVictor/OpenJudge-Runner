#include<stdio.h>
int main(){
  long int a,c;
  char b[5];
  scanf("%ld%s",&a,b);
  c=(b[0]-'0')*100+(b[2]-'0')*10+(b[3]-'0');
  printf("%ld",a*c/100);
}
