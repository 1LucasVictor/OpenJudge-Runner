#include<stdio.h>
#include<string.h>

int main() {
    long n,d,c;
  	c=0;
    scanf("%ld %ld",&n,&d);
    long x[200000],y[200000];
    for (int i=0;i<n;i++) {
        scanf("%ld %ld",&x[i],&y[i]);
    }
    for (int i=0;i<n;i++) {
        if (x[i]*x[i]+y[i]*y[i]<=d*d) c++; 
    }
    printf("%d",c);
    return 0;
}