#include<stdio.h>
int main(void){
  int i,n,sum=0;
  long int d;
  scanf("%d %ld",&n,&d);
  long int x[n],y[n];
  for(i=0;i<n;i++){
    scanf("%ld %ld",&x[i],&y[i]);
    if(d*d>=x[i]*x[i]+y[i]*y[i])sum++;
  }
  printf("%d",sum);
  return 0;
}
