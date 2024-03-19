#include<stdio.h>

int main(void){
    int n,x;
    long min=1000000,max=-1000000,sum=0;

    scanf("%d",&n);

    while(n>0){
        scanf("%d",&x);
        if(x<min) min=x;
        if(x>max) max=x;
        sum+=x;
        n--;
    }
    printf("%ld %ld %ld\n",min,max,sum);

    return 0;
}
