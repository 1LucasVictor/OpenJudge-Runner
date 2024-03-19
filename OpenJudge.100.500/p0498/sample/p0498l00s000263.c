#include <stdio.h>
 
int main(void){
  int n;
  int s;
  scanf("%d",&n);
  if(n%2==0){
    s=n/2;
  }
  else{
    s=n/2+1;
  }
  printf("%d",s);
  return 0;
}