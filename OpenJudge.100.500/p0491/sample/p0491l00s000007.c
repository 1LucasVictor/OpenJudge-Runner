#include<stdio.h>
 
int main(){
  int n,k,a;
  scanf("%d %d",&n,&k);
  
  if((n%k) < k-(n%k))
    printf("%d",n%k);
  else
    printf("%d",k-(n%k));
  
  return 0;
}