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
    while(!(ap == n && bp == m)){
        if(ap == n){
            k -= b[bp];
            bp++;
            goto cntn;
        }
        if(bp == m){
            k -= a[ap];
            ap++;
            goto cntn;
        }
        if(a[ap] < b[bp]){
            k -= a[ap];
            ap++;
        }else{
            k -= b[bp];
            bp++;
        }
cntn:;
        if(k >= 0)cnt++;
        else break;
    }
    printf("%ld",cnt);
}