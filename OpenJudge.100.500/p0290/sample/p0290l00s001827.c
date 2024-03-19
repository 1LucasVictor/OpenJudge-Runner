#include <stdio.h>

#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

#define size (int)1e8+5
char isPrime[size];

void solver() {
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < size; ++i) {
        isPrime[i] = 1;
    }
    for (int i = 2; i < size; ++i) {
        if (isPrime[i] == 1) {
            for (int j = 2 * i; j < size; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    int N;
    int tmp;
    int sum = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &tmp);
        if (isPrime[tmp] == 1) {
            sum++;;
        }
    }

    printf("%d\n", sum);
}


int main() {
    solver();
    return 0;
}
