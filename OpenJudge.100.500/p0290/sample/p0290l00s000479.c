#include <stdio.h>
 
#define MAX 100000007
 
static unsigned char is_not_prime[((MAX + 1) + 7) / 8];
 
static inline int get_bit(int i) {
    return (is_not_prime[i >> 3] >> (i & 7)) & 1;
}
 
static inline void set_bit(int i) {
    is_not_prime[i >> 3] |= (1 << (i & 7));
}
 
void init(void) {
    int i, j;
    set_bit(0);
    set_bit(1);
    for (j = 4; j <= MAX; j += 2) set_bit(j);
    for (i = 3; i * i <= MAX; i += 2) {
        if (!get_bit(i)) {
            for (j = i * i; j <= MAX; j += i) set_bit(j);
        }
    }
}
 
int main(void) {
    int N, i;
    int count = 0;
    init();
    if (scanf("%d", &N) != 1) return 1;
    for (i = 0; i < N; i++) {
        int q;
        if (scanf("%d", &q) != 1) return 1;
        if (!get_bit(q)) count++;
    }
    printf("%d\n", count);
    return 0;
}
