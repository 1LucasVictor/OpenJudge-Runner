#include<stdio.h>
int main()
{
    int n,i,ai,min,max;
    n <= 10000;
    long long sum = 0;
    min = 1000000;
    max = -1000000;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ai);
        sum += ai;
        if(max < ai){
            max = ai;
        }
        if(min > ai){
            min = ai;
        }

    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}