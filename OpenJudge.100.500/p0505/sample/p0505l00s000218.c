#include <stdio.h>
int main() {
    int H, N;
    scanf("%d %d", &H, &N);
    int sum = 0;
    int temp;
    int i;
    for(i=0; i<N; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    if(H <= sum) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}