
#include<stdio.h>
#include <sys/time.h>
long long fibo(int n){
	long long fibodp[200];
	fibodp[0]=1;
	fibodp[1]=1;
for(int i = 2;i<=n; i++){
	fibodp[n]=fibodp[n-1]+fibodp[n-2];
}
return fibodp[n];
}

int main(void){
    int a;
    scanf("%d",&a);
for(int i=0;i<=40;i++){
long long res=fibo(i);
if(i==a){
printf("%lld\n",res);
}
}
return(0);
}
