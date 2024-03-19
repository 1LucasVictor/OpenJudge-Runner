#include<stdio.h>

int main()
{
    long long int N,i,j,count;
    scanf("%lld", &N);
    long long int arr[N];
    for(i=2;i<=N;i++){
        scanf("%lld", &arr[i]);
    }
    for(i=1;i<=N;i++){
        count = 0;
        for(j=2;j<=N;j++){
            if(arr[j] == i){
                count++;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}