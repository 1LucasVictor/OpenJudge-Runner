#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    int N,A[200000],x;
    scanf("%d",&N);
    for (int i=0; i<N; i++) {
        scanf("%d",&x);
        for (int j=0; j<i; j++) {
            if (x==A[j]) {
                printf("NO\n");
                return 0;
            }
        }
        A[i]=x;
    }
    printf("YES\n");
    return 0;
}
