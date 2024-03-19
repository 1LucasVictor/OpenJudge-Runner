#include<stdio.h>

int main(){
  int n,x,c,i,j,k;
  scanf("%d%d",&n,&x);
  while(n*n+x*x){
    c=0;
    for(i=1;i<=n-2;i++){
      for(j=i+1;j<=n-1;j++){
        for(k=j+1;k<=n;k++){
          if(x==i+j+k) c=c+1;}
        }
      }
    printf("%d\n",c);
    scanf("%d%d",&n,&x);}
  return 0;}