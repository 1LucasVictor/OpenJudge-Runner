#include<stdio.h>
int main(){
    int N,A[N],i,sum=0;
    unsigned int H;

    scanf("%d %d",&H,&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    
    if(H<=sum){
        printf("Yes");
    }
    if(H>sum){
        printf("No");
    }
    printf("\n");

    return 0;
    
}