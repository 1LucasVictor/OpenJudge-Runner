#include <stdio.h>

int main(void){
    int N;
    long long D;
    long long X[200000];
    long long Y[200000];
    int i;
    long long sum=0;
    long long tmp=0;
    int cnt=0;

    scanf("%d %lld",&N,&D);

    tmp = D*D;
 //   printf("%lld\n",tmp);
    for(i=0;i<N;i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
    }

    for(i=0;i<N;i++){
 //       printf("X=%d\n",X[i]);
 //       printf("Y=%d\n",Y[i]);
        sum = X[i]*X[i] + Y[i]*Y[i];
 //       printf("%d\n",sum);

    
        if (sum <= tmp){
            cnt++;
        }
    }
    printf("%d",cnt);
}