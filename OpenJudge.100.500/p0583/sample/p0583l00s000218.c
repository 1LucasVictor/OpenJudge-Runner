#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char s[200000];
long long flag1 = 0, flag2 = 0,n;

void dfs1(long long x,long long g) {
    if (x == g) {
        flag1 = 1;
        s[g] = '#';
        return;
    }
    if (x >= n||s[x]=='#') return;
    dfs1(x + 1,g); dfs1(x + 2,g);
}

void dfs2(long long x, long long g) {
    if (x == g) {
        flag2 = 1;
        s[g] = '#';
        return;
    }
    if (x >= n || s[x] == '#') return;
    dfs2(x + 1, g); dfs2(x + 2, g);
}

int main() {
    long long a, b, c, d;
    scanf("%lld%lld%lld%lld%lld", &n,&a,&b,&c,&d);
    scanf("%s", s);
    dfs2(b - 1, d - 1);
    dfs1(a - 1, c - 1);
    s[d - 1] = '.', s[c - 1] = '.',s[b-1]='#';
    dfs1(a - 1, c - 1);
    s[b - 1] = '.';
    dfs2(b - 1, d - 1);
    if (flag1 == 1 && flag2 == 1) printf("Yes");
    else printf("No");

    return 0;
}