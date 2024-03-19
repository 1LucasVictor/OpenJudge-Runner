#include <stdio.h>
int main()
{
    int H,N,A,i,sum=0;
    scanf("%d",&H);
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A);
        sum+=A;

    }
    if((H==sum)||(H<sum)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
        return 0;
}