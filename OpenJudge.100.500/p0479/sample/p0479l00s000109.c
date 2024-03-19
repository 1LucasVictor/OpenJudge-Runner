#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);
    int A[N+1];
    int B[N+1];
    int i,j;
    for(i=0;i<N;i++){
        B[i]=0;
    }
    A[0]=1;

    for(i=1;i<N;i++){
        scanf("%d",&A[i]);
            B[A[i]-1]+=1;

    }


    for(i=0;i<N;i++){
        printf("%d\n",B[i]);
    }
    return 0;
}
