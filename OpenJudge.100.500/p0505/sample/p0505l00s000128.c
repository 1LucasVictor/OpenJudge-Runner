#include <stdio.h>

int main()
{
    int i, n, N, H, count = 0;
    scanf("%d %d",&H ,&N);
    int A[N];
    for(i = 0; i < N; i++){
        scanf("%d",&A[i]);
        count += A[i];
    }
    if(count >= H){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
