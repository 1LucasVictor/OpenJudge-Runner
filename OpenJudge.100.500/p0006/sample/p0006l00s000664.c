#include <stdio.h>
#define syakkin 100000
int main(void){
  int n,a,i;
  scanf("%d",&n);
  for(i=0,a=syakkin;i<n;i++){
    a *= 1.05;
    if(a%1000!=0)  a=a-a%1000+1000;
  }
  printf("%d\n",a);
  return 0;
}