#include <stdio.h>
int result[45];

int fib(int n){
    if(n==0||n==1)
      return result[n] = 1;
    if(result[n] != -1)
      return result[n];
    return result[n]=fib(n-1)+fib(n-2);
}

int main(){
  int n,i;
    for(i=0;i<45;++i){
        result[i]=-1;
    }
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}

