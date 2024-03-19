#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define M 1000001
#define mod 10007

int main(void){
    int N,A[200000]={};
    int x;
    scanf("%d",&N);
    for (int i=0; i<N-1; i++) {
        scanf("%d",&x);
        A[x-1]++;
    }
    for (int i=0; i<N; i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}