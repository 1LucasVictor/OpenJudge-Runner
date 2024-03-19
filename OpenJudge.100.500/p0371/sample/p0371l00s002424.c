#include<stdio.h>
 
int main(){
    int n,d,min,max;
    long long sum;
    scanf("%d %d",&n,&d);
    sum = min = max = d;
 
    for(int i=1;i<n;i++){
        scanf("%d",&d);
        if(d <= min)min = d;
        if(d >= max)max = d;
 
        sum += d;
    }
    printf("%d %d %lld\n",min, max,sum);
    return 0;
}
