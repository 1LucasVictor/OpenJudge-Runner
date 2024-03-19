#include<stdio.h>
#include<string.h>

int main(){
    int A,B,C,K;
    long long sum;
    scanf("%d%d%d%d",&A,&B,&C,&K);

    if(A>=K)
        printf("%d\n",K);
    else if((B+A)>=K)
        printf("%d\n",A);
    else
        printf("%d\n",A-(K-B-A));

    return 0;
}