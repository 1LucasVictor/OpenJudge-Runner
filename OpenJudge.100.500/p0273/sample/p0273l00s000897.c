#include<stdio.h>

int Fibonacci(int);

int main(){
    int i,n;
    scanf("%d",&n);
    printf("%d\n",Fibonacci(n+1));
    return 0;
}

int Fibonacci(int n){
    int i,num,m1,m2;
    if(n==0) return 0;
    if(n==1) return 1;
    num=0;
    m1=0;
    m2=1;
    for(i=0;i<n;i++){
        num=m1+m2;
        m2=m1;
        m1=num;
    }
    return num;
}
