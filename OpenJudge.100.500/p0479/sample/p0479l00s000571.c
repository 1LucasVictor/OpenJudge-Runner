#include <stdio.h>

int main(void){

        long long int N,i,Ai;
        int count[300000];
        scanf("%lld",&N);

        for(i=0;i<N-1;i++){
                scanf("%lld",&Ai);
                count[Ai-1]++;
        }   

        for(i=0;i<N;i++){
                printf("%d\n",count[i]);
        }   
return 0;
}
