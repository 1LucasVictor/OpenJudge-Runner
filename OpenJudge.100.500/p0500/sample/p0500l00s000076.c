#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h> // uint64_t

#define BUF_SIZE 20

// size: specify sizeof(str)
int get_str(char *str, int size) {
    if(!fgets(str, size, stdin)) return -1;
    return 0;
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

#define NUM_MAX 3

int main(void) {
    int n, queries;
    static char map[NUM_MAX];
    int i;
    memset(map, -1, NUM_MAX);
    get_int2(&n, &queries);
    int flag = 1;
    for(i = 0; i < queries; i++) {
        int pos, digit;
        get_int2(&pos, &digit);
        pos--;
        if(map[pos] != -1 && map[pos] != digit) { flag = 0; }
        map[pos] = digit;
    }
    if(map[0]==0) {
        if(n>1) flag = 0;
    }
    map[0] = (map[0] == -1) ? (n>1) : map[0];
    map[1] = (map[1] == -1) ? 0 : map[1];
    map[2] = (map[2] == -1) ? 0 : map[2];
    int ans = -1;
    if(flag) {
        int guess = 0;
        int d = 1;
        for(i = n-1; i >= 0; i--) {
            guess += map[i]*d;
            d *= 10;
        }
        ans = guess;
    }
    printf("%d\n", ans);
    return 0;
}