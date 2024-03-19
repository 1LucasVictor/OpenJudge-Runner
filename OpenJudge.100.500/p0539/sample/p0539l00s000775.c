#include<stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    for(int i=1; i<10; i++) {
        for(int j=1; j<10; j++) {
            if(N == i*j) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
