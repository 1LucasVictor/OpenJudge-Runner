#include<stdio.h>
int main()
{
  int a, b[1000], i, x;

  scanf("%d" ,&a);
  for(i=1; i<=a; i++){
    scanf("%d",&b[i]);
  }

  for(i=a; 1<=i; i--){
    if(i == 1) printf("%d\n",b[i]);
    else printf("%d ",b[i]);
  }

  return 0;
  
}