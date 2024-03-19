// https://atcoder.jp/contests/abc132/tasks/abc132_a

#include <stdio.h>
#define forn(i,L,R) for (int i = L; i < R; i++)
#define getString(x) scanf("%s", x)

int main(){
    char x[5];
    getString(x);
    char a, b;
    int aCnt = 0, bCnt = 0;
    a = x[0];
    forn(i, 1, 4){
        if (x[i] != a){
            b = x[i];
            break;
        }
    }
    forn(i, 0, 4){
        if (x[i] == a) aCnt++;
        else if (x[i] == b) bCnt++;
    }
    
    if (aCnt == 2 && bCnt == 2) printf("Yes\n");
    else printf("No\n");
    return 0;
}