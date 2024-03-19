#include<stdio.h>
#include<stdlib.h>

int main(void){
    int A[200010],N;
    int ans;

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]==A[j]){
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");

    return 0;
}