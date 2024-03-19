#include<stdio.h>

void main(){
  int n, n100, n10, n1;
  scanf("%d",&n);
  
  n100 = n/100;
  n10  = (n/10)%10;
  n1   = n%10;
  if(n100 == 7)
    printf("Yes");
  else if(n10 == 7)
    printf("Yes");
  else if(n1 == 7)
    printf("Yes");
  else
    printf("No");
}