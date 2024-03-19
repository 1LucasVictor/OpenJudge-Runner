#include <stdio.h>
int main (void){
    int N,i,j,buf;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    buf=1;
    while(buf==1){
        buf=0;
        for(i=0;i<N-1;i++){
            if(A[i]>A[i+1]){
                j=A[i];
                A[i]=A[i+1];
                A[i+1]=j;
                buf=1;
            }
        }
    }
    for(i=0;i<N-1;i++){
        if(A[i]==A[i+1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}