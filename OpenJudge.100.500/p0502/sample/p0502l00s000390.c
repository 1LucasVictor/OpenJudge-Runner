#include <stdio.h>
int main(void){
  int n,i,a=0,b=0;
  int c[1000]={0};  
  
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d ",&c[i]);
  
  for(i=0;i<n;i++)
   if(c[i]/2==0){
     if(c[i]/3==0 ||c[i]/3==0 ) a++;}
   else
     b++;
  
  if(n-b==a) puts("APPROVED");
  else puts("DENIED");
  return 0;
}