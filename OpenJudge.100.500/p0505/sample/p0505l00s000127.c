#include <stdio.h>
int main(){
    int H,N,A[10001];
    scanf("%d %d",&H,&N);
    int i,sum;
    
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    sum = 0;
    for(i = 0;i<N ;i++){
        sum = sum + A[i];
    }
    if(sum>=H){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
