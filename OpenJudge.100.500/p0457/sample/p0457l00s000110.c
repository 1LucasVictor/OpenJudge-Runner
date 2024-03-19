#include <stdio.h>

int main() {
    int N,M,a = 0,b = 0;
    double K,time = 0;
    double A[200010],B[200010];
    int cnt = 0;
    
    scanf("%d %d %lf",&N, &M, &K);
    for (int i = 0;i < N;i++) scanf("%lf",&A[i]);
    for (int i = 0;i < M;i++) scanf("%lf",&B[i]);
    
    for (cnt = 0;cnt < N + M;cnt++)
    {
        if (A[a] <= B[b])
        {
            time = time + A[a];
            a++;
        }
        else
        {
            time = time + B[b];
            b++;
        }
        
        if (time > K) break;
    }

    printf("%d\n",cnt);
    return 0;
}
