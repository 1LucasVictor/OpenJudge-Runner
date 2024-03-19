#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define F(i,a,n) for(int i=a; i<n; i++)


int main(){
    int n;
    scanf("%d",&n);
    int a[n-1];
    long sum=0;
    F(i,0,n-1){
        scanf("%d",a+i);
    }
    int b[n];
    F(j,0,n){
        b[j]=0;
    }
    F(j,0,n-1){
        b[a[j]-1]++;
    }
    F(k,0,n){
        printf("%d\n",b[k]);
    }
    return 0;
}