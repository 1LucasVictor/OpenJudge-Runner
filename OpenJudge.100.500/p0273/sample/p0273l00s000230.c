#include <stdio.h>
#define N 44
int fib(int);
int F[N];
int main(){
int n,i;
for( i=0;i<N;i++){
F[i] = 0;
}
scanf("%d",&n);
printf("%d\n",fib(n));
}

int fib(int n){
if(n == 0 || n ==1){
return F[n] =1;
}
if(F[n] != 0){
return F[n];
}
return F[n] = fib(n-2) +fib(n-1);
}


