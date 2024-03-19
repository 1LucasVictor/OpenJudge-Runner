#include<stdio.h>
int main()
{
  int n,a,b;
  int numa;

  scanf("%d %d %d",&n,&a,&b);
  numa = a*n;
  
  if(numa>b){
    printf("%d",b);
      }else{
    printf("%d",numa);
  }
  return 0;
}

  
