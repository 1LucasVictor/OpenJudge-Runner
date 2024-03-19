#include <stdio.h>
int main()
{
    int n, i, p, max=-1000000, min=1000000;
    long long int sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &p);
        if(p<min){
            min = p;
        }
        if(p>max){
            max=p;
        }
        sum+=p;
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}

     
