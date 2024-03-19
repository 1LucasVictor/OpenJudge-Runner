#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N,i,j;
    int* A;
    scanf("%d",&N);
    A=(int*)malloc(sizeof(int)*N);
    for(i=0;i<N;i++){
        A[i]=0;
    }
    for(i=0;i<N-1;i++){
        scanf("%d",&j);
        A[j-1]++;
    }
    for(i=0;i<N;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}