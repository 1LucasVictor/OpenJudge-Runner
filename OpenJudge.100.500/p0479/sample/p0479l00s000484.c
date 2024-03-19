#include<stdio.h>
 
int main(void)
{
    int N, i, B[20000]={0};
    
    scanf("%d",&N);
    int A;

    for(i=1; i<N; i++) {
        scanf("%d",&A);
        B[A-1]++;
    }
 
    for(i=0; i<N; i++) {
        printf("%d\n", B[i]);
    }
 
    return 0;
}