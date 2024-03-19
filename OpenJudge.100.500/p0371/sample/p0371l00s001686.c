#include<stdio.h>
#define MAXN 10000
int main(void){
    int a[MAXN];
    long long int n,i,t,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=-1000000;
    min=1000000;
    t=0;
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }if(min>a[i]){
            min=a[i];
        }
        t+=a[i];
    }
    printf("%d %d %lld\n",min,max,t);
    return 0;
}
