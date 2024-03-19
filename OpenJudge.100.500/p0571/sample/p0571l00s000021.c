#include<stdio.h>
 
int main(){
  
  int a,b,n;
  int tax,tra;
  scanf("%d %d %d",&n,&a,&b);
  
  tra=n*a;
  
  if(tra>b)printf("%d",b);
  else if(tra<b)printf("%d",tra);
  else{printf("%d",b);}
  
  return 0;
  
}