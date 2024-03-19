#include <stdio.h>

int main(void)
{
    int N,i,tmp;
    int A[200001];
    int buka[200001];

    scanf("%d",&N);
    
    for(i=0; i<N; i++){
        buka[i]=0;
    }
    for(i=0; i<N-1; i++){
        scanf("%d",&tmp);
        buka[tmp-1]++;
    }

    for(i=0; i<N; i++){
        printf("%d\n",buka[i]);
    }
    
    return 0;
}