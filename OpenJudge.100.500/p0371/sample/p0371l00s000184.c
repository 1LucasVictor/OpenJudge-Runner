#include<stdio.h>
int main(void){
    int a[10001];
    int n;
    int i;
    int max=-1000000,min=1000000,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=min)
            min=a[i];
        if(a[i]>=max)
            max=a[i];
        sum+=a[i];
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}