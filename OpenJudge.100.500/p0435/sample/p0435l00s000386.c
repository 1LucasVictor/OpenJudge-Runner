#include<stdio.h>
int main(void){
  int n,d,sum=0,i;
  scanf("%d %d",&n,&d);
  int x[n+1],y[n+1];
  for(i=1;i<n+1;i++)scanf("%d %d",&x[i],&y[i]);
  for(i=1;i<n+1;i++){
    if(d*d>=x[i]*x[i]+y[i]*y[i])sum++;
  }
  printf("%d",sum);
  return 0;
}
