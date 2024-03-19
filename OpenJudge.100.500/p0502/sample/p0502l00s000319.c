#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    int N,x;
    scanf("%d",&N);
    for (int i=0; i<N; i++) {
        scanf("%d",&x);
        if (x%2==0) {
            if (x%3!=0 && x%5!=0) {
                printf("DENIED\n");
                return 0;
            }
        }
    }
    printf("APPROVED\n");
    return 0;
}
