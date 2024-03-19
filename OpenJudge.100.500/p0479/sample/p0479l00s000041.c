#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int main(void)
{
    int N, i=1;
    
    scanf("%d",&N);
    int A[N], B[20000]={0};

    for(i=1; i<N; i++) {
        scanf("%d",&A[N]);
        B[A[N]-1]++;
    }
 
    for(i=0; i<N; i++) {
        printf("%d\n", B[i]);
    }
 
    return 0;
}