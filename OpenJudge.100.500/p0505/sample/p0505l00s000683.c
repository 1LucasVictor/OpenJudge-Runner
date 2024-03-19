#include<stdio.h>

int main(void){
    int H,N,i;
    int A[100000];

    scanf("%d%d",&H,&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    for(i=0; i<N; i++){
        H = H - A[i];
    }

    if(H>0)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
    
}
