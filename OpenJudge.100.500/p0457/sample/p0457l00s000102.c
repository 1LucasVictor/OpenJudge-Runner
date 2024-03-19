#include<stdio.h>
#include<string.h>

int main(void){
    register long i;
    long n,m,k;
    scanf("%ld%ld%ld",&n,&m,&k);
    long a[n],b[m];
    for(i = 0;i < n;i++)scanf("%ld",&a[i]);
    for(i = 0;i < m;i++)scanf("%ld",&b[i]);
    long cnt = 0,ap = 0,bp = 0;
    while(k >= 0 || (ap == n-1 && bp == m-1)){
        if(a[ap] < b[bp]){
            k -= a[ap];
            ap++;
        }else{
            k -= b[bp];
            bp++;
        }
        if(k >= 0)cnt++;
    }
    printf("%ld",cnt);
}