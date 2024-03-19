#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SIZE 30

// size: specify sizeof(str)
int get_str(char *str, int size) {
    if(!fgets(str, size, stdin)) return -1;
    return 0;
}

int get_int(void) {
  int num;
#ifdef BUF_SIZE
  char line[BUF_SIZE];
  if(!fgets(line, BUF_SIZE, stdin)) return 0;
  sscanf(line, "%d", &num);
#else
#error
#endif
  return num;
}

int get_int2(int *a1, int *a2) {
#ifdef BUF_SIZE
  char line[BUF_SIZE];
  if(!fgets(line, BUF_SIZE, stdin)) return -1;
  sscanf(line, "%d %d", a1, a2);
#else
#error
#endif
  return 0;
}
#define PACKS_MAX 100000
#define TRACKS_MAX 100000

int desc(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int asc(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int judge(int *cum, int size, int tracks, int key) {
    int cnt;
    int prev = 0;
    for(cnt = 0; cnt < tracks; cnt++) {
        int low = prev-1;
        int high = size;
        while(low + 1 < high) {
            int mid = (low+high)/2;
            // [prev, mid)
            int rsum = cum[mid] - cum[prev];
            // upper bound
            if(rsum <= key) {
                low = mid;
            } else {
                high = mid;
            }
        }
        prev = low;
        // no packages
        if(prev == size-1) break;
#ifdef DEBUG
        printf("prev: %d\n", prev);
#endif
    }
    return (prev == size-1);
}

#define max(a,b) ((a) > (b) ? (a) : (b))

int main(void) {
    int ps, tracks;
    get_int2(&ps, &tracks);
    int i;
    int low = 0;
    static int cum[PACKS_MAX+1];
    for(i = 1; i <= ps; i++) {
        int p = get_int();
        cum[i] = cum[i-1] + p;
        low = max(low, p);
    }

    int high = cum[ps];
    low--; high++;
    // binary-search
    while(low + 1 < high) {
        int mid = (low + high)/2;
        // lower bound
        if(judge(cum, ps+1, tracks, mid)) {
            high = mid;
        } else {
            low = mid;
        }
    }
    printf("%d\n", high);
    return 0;
}
