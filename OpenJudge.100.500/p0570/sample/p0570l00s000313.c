#include <stdio.h>

int main()
{
    int A,B;
    int small,diff,half,answer;

    scanf("%d %d\n",&A,&B);

    small=B;
    diff=A-B;
    
    if(diff<0){
        diff=-1*diff;
        small=A;
    }
    if(diff%2==1){
        printf("IMPOSSIBLE\n");
    }
    else{
        half=diff/2;
        answer=small+half;

        printf("%d\n",answer);
    }

    return 0;
}