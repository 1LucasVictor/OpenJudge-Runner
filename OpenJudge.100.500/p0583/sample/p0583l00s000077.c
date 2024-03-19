#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
typedef long long ll;

bool flag = false;
char s[200000];
ll n, a, b, c, d, dx1[4] = { 1,2,0,0 }, dx2[4] = { 0,0,1,2 };

void dfs(ll x1,ll x2) {
    if (x1 > c || x2 > d || s[x1] == '#' || s[x2] == '#') return;
    s[x1] = '#', s[x2] = '#';
    if (x1 == c && x2 == d) { flag = true; return; }
    s[x1] = '.', s[x2] = '.';
    for (int i = 0; i < 4; i++) {
        dfs(x1 + dx1[i], x2 + dx2[i]);
    }
}

int main() {
    scanf("%lld%lld%lld%lld%lld", &n,&a,&b,&c,&d);
    a--, b--, c--, d--;
    scanf("%s", s);
    dfs(a, b);
    if (flag) printf("Yes");
    else printf("No");

    return 0;
}