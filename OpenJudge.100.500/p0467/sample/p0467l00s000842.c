#include<stdio.h>
 
int main(){
  int a, b, c, k; 
  int sum = 0;
  scanf("%d %d %d %d",&a,&b,&c,&k);
  int k1 = k-a;
  int k2 = k1-b;
  if(k1<0)
    sum = k1;
  else if(k2<0)
    sum = a;
  else
    sum = a-k2;
  printf("%d",sum);
  return 0;
}