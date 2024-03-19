#include <stdio.h>
int main(){
  int a,b,k,i,c=0;
  scanf("%d%d%d",&a,&b,&k);
  for(i=a;1<=i;i--){
    if(a%i==0&&b%i==0)c++;
    if(k==c)break;
  }
  printf("%d",i);
  return 0;
}