#include <stdio.h>
int main(void){
  int n,x,i,j,k,c=0;
  while(scanf(" %d%d",&n,&x)){
    if(n==0&&x==0)break;
    for(i=0;i<n;i++){
      if(i>x/3)break;
      for(j=i+1;j<n;j++){
        if(j>(x-i)/2)break;
        if(x-i-j<n){
          c++;
          break;
        }
      }
    }
  }
  printf("%d\n",c);
}