#include <stdio.h>
#include <stdlib.h>
#define min(a,b) \
({ __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a < _b ? _a : _b; })
#define FOR(i,L,R) for (int i = L; i < R; i++)
#define ll long long
#define READ(n) int (n); scanf("%d",&(n))
#define getString(x) scanf("%s", x)
#define getInt(a) scanf("%d", &a)

int main(){
    READ(a); READ(b);
    int x = abs(b - a);
    if (x % 2 == 1){
        printf("IMPOSSIBLE\n");
        return 0;
    }
    printf("%d\n", min(a, b) + x/2);
}