#include <stdio.h>

int main(void)
{

    int A,B,K;
    scanf("%d %d",&A,&B);
    K=(A+B)/2;
    if(abs(A-K)==abs(B-K)){
    printf("%d\n",K);
    }   
    else{
     printf("IMPOSSIBLE\n");
    }   
    return 0;
    }   
