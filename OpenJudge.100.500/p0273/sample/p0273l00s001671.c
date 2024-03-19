#include <stdio.h>
int main(void){
    int n,i;
    int fib[100]={1,1};
   
    scanf("%d",&n);
    
    for(i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        
    }
    printf("%d\n",fib[n]);
    
}

