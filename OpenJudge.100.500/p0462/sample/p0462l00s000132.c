//#include<iostream>
#include<stdio.h>
//using namespace std;
#define N 1000


int main(){
    long long a,s=0;
    double b;
    int c;
    int d;
    scanf("%lld %lf",&a,&b);
    c=b*100;
    d=c%100;
    c-=d;
    c/=100;
    s+=a*c;
    a*=d;
    a/=100;
    s+=a;
    printf("%lld",s);
    
    return 0;
}

