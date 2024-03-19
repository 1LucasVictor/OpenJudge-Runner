#include <stdio.h>
#define H 45


int main(){
  int n,u[H],fib,i;
  scanf("%d",&n);

  if(0<=n && n<=44){
    u[0]=1;
    u[1]=1;
    for(i=2;i<=n;i++){
      u[i]=u[i-1]+u[i-2];
    }
  }
  printf("%d\n",u[n]);
return 0;  
}