//abc153
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int H,N;
    int A[100000];
    int sum=0;
    scanf("%d %d\n",&H,&N );
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        sum = sum + A[i];
    }
    if (sum>H) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
