#include <stdio.h>
#define SIZE 1000000 
int main() {
 
    int A[SIZE],i, N,H,sum=0;
    scanf("%d %d",&H, &N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    if(sum>=H){
        printf("Yes\n");
    }
    else{
         printf("No\n");
    }
    
    return 0;
}

