#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    int N,x;
    int *A;
    A = malloc(100000000);
    scanf("%d",&N);
    for (int i=0; i<N; i++) {
        scanf("%d",&x);
                              if(A[x]!=0){
                              printf("NO\n");
                                  free(A);
                                  return 0;
                              }
                              else{
                               A[x]=1;
                              }
    }
    printf("YES\n");
    free(A);
    return 0;
}
