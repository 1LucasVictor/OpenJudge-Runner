#include<stdio.h>
int main(void){
    long a[10001];
    long n;
    long i;
    long max=-1000001,min=1000001,sum=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld",&a[i]);
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
        sum+=a[i];
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}