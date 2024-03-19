#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int A[N],B[N];
    int ans=0;
    int a=1;
    int count = 1;
    B[0]=0;
    for(int i = 1;i<N;i++){
        scanf("%d",&A[i]);
        B[i] = 0;
    }
    for(int i = 1;i<N;i++) B[A[i]-1]++;
    for(int i = 0;i<N;i++) printf("%d\n",B[i]);
    
    return 0;
}