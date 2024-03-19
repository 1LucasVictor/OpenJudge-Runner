#include<stdio.h>
int main()
{
  int n,x;
  scanf("%d",&n);
  for(x=1;x<=n;x++){
    if(x%3==0||x%10==3){
      printf(" %d",x);
    }
  }
   printf("\n");
    return 0;
}