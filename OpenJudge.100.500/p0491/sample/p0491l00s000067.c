#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long N = 0;
    long long K = 0;
	scanf("%d %d", &N, &K);

    for(;;){
        if(abs(N - K) >= N){
            break;
        }
        N = abs(N - K);
    }

    printf("%d", N);

	return 0;
}