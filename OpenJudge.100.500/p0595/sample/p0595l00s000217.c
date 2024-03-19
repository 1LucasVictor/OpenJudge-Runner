#include<stdio.h>
int main(void)
{
  int a,b,k;
  scanf("%d%d%d",&a,&b,&k);
  for(int i=1;i<a||i<b;i++){
    if(a%i==0&&b%i==0){
      k--;
    }
    if(k==0){
      printf("%d",i);
      return 0;
    }
  }
}
