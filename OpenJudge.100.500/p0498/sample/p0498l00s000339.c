#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  if(n%2==1)
    printf("%d\n",n/2+1);
  else
    printf("%d\n",n/2);
  return 0;
}
    