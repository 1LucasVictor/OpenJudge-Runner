#include <stdio.h>

int main(){
    int N,x;
    scanf("%d",&N);
    int range[N];
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        range[i]=x;
    }
    printf("%d",range[N-1]);
    for(int i=N-2;0<=i;i--){
        printf(" %d",range[i]);
    }
    printf("\n");
}
