#include<stdio.h>




int fibo(int n){
int a;
if(n==0||n==1){return 1;}
else{ a=fibo(n-1)+fibo(n-2); return a;}
}






int main(){
int n,x;

scanf("%d",&n);

x=fibo(n);
printf("%d\n",x);

return 0;
}
