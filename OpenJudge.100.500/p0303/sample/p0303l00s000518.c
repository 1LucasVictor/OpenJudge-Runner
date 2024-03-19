#include <stdio.h>

#if 1
    #define gc() getchar_unlocked()
#else
    #define gc() getchar()
#endif

int n, k;
int w[100001];

int in() {
    int n = 0, c = gc();
    do n *= 10, n += (c & 0xf), c = gc(); while (c >= '0');
    return n;
}


int check(int capacity) {
    int curLoad = 0, numTrucks = 0, i;
    for (i=0; i<n; i++) {
        curLoad += w[i];
        if (curLoad > capacity) {
            curLoad=w[i], numTrucks++;
            if (numTrucks == k) break;
        }
    }

    return numTrucks < k;
}

int main(void){
    int p, lo, hi, mi, i;
    
    n = in(), k = in();
    
    lo = hi = 0;
    for (i=0; i<n; i++) {
        w[i] = in();
        if (w[i] > lo) lo = w[i];
        hi += w[i];
    }
    
    if (k == 1) { printf("%d\n", hi); return 0; }
    else if (check(lo)) { printf("%d\n", lo); return 0; }
    
    while (lo+1 < hi) {
        mi = (lo+hi) >> 1;
        if (check(mi)) hi = mi;
        else lo = mi;
    }
    
    printf("%d\n", hi); return 0;
}

