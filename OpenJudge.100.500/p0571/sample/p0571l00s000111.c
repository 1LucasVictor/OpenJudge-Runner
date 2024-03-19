#include<stdio.h>
int main()
{
  int n,a,b;
  int numa,numb;

  scanf("%d %d %d",&n,&a,&b);
  numa = a*n;
  numb = b*n;
  
  if(numa>numb){
    printf("%d",numb);
      }else{
    printf("%d",numa);
  }
  return 0;
}

  
