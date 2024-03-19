#include <stdio.h>
int main(){
  long a,b;
  char input[5];
  
  scanf("%ld %s",&a,input);
  b=(input[0]-'0')*100;
  b+=(input[2]-'0')*10;
  b+=(input[3]-'0');
  
  printf("%ld",(a*b)/100);
}
