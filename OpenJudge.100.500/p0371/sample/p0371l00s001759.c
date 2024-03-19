#include<stdio.h>
int main(void){
    int i,n,a,min=1000000,max=-1000000;
    long long int sum=0;
    scanf("%d",&n);
    i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(max<a){
            max=a;
        }
        if(min>a){
            min=a;
        }
        sum+=a;
    }
    printf("%d %d %lld\n",min,max,sum);
    return 0;
}
