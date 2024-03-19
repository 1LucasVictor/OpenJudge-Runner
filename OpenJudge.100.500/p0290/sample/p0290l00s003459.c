#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define NMAX 100000000
void eratosthenes(int A[]);
int main(void){
    int n,i,x,cnt=0;
    int *A;
    A = (int *)malloc(sizeof(int) * NMAX);
    if (A == NULL) exit(0);
    eratosthenes(A);
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x);
        if(x != 0 && A[x-1]){
            cnt++;
        }
    }
    printf("%d\n",cnt);

    free(A);

    return 0;
}

void eratosthenes(int A[]){
    int i,j;
    A[0] = 0;
    for(i=1;i<NMAX;i++){
        A[i]=1;
    }
    for(i=0;i<sqrt((double)NMAX);i++){
        if(A[i] == 1){
            for(j=(i+1)*2-1;j<NMAX;j+=(i+1)){
                A[j] = 0;
            }
        }
    }
}
