#include<stdio.h>

int main(void){
  int n,d;
  scanf("%d %d",&n,&d);
  int x[n],y[n];
  int c=0;
  for(int i=0;i<n;i++){
    scanf("%d %d",&x[i],&y[i]);
    if((x[i]*x[i]+y[i]*y[i])<=d*d){
    c++;
  }
  }

  
  printf("%d",c);
  return 0;
}
