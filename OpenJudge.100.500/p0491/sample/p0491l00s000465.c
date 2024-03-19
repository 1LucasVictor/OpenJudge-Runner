#include<stdio.h>
 
int main(){
  int n,k,a;
  scanf("%d %d",&n,&k);
  
  a = n%k;
  if(a < k-a)
    printf("%d",a);
  else
    printf("%d",k-a);
  
  return 0;
}