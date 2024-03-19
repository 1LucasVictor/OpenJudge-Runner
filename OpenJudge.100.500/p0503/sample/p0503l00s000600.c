#include<stdio.h>
#include<stdlib.h>

int main(void){
    static char A[1000000010];
    int  N;
    int num;
    int ans;

    scanf("%d",&N);

    for(int i=0;i<1000000010;i++){
        A[i]=0;
    }

    for(int i=0;i<N;i++){
        scanf("%d",&num);
        A[num]++;
        if(A[num]>1){
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}