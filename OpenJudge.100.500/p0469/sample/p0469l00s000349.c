#include<stdio.h>
 
int main(void)
{
 int i,j;
  int a,b,k,c,d;
  
  scanf("%d",&k);
  scanf("%d",&a);
  scanf("%d",&b);
  
  c=a/k;
  d=b/k;
  
  if(c<d){
    printf("OK\n");
  }else if(a%k==0){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  
  return 0;
}