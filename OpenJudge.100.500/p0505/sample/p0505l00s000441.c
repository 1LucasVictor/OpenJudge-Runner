#include <stdio.h>

int main(void)
{
    const int H, N;
    scanf("%d %d", &H, &N);
    int total = 0;
    for(int i = 0; i < N; i++){
        int a;
        scanf("%d", &a);
        total += a;
    }
    printf(total < H ? "No" : "Yes");
    return 0;
}
