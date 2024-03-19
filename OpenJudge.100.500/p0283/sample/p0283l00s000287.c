#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef long long ll;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,l,r) for(int i=l; i<(int)(r); i++)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define swap(a,b) {ll tp=a;a=b;b=tp;}
const ll MOD = 1000000007;

int p[10] = {0};
int my_next_perm(int n){
    int i, j, tmp;
    if(n <= 1) return 0;
    for(i = n-1; i > 0 && p[i-1] >= p[i]; i--);
    if(i == 0) return 0;
    for(j = n-1; j > i && p[i-1] >= p[j]; j--);
    swap(p[i-1], p[j]);
    for(j = n-1; i < j; i++, j--)
        swap(p[i], p[j]);
    return 1;
}

void fill_sc(char q[10][10], const int x,const int y){
    const int dx[] = {1,1,-1,-1}, dy[] = {-1,1,-1,1};
    q[x][y] = 'Q';
    rep(i,8) if(q[i][y] == 0) q[i][y] = '.';
    rep(i,8) if(q[x][i] == 0) q[x][i] = '.';
    rep(i,4){
        int tmpx = x, tmpy = y;
        while(tmpx >= 0 && tmpx < 8 && tmpy >= 0 && tmpy < 8){
            if(q[tmpx][tmpy] == 0) q[tmpx][tmpy] = '.';
            tmpx += dx[i]; tmpy += dy[i];
        }
    }
}

char P[10][10] = {0}, Q[10][10] = {0};
int ch[10] = {0};
int main(){
    int k; scanf("%d", &k);
    rep(i,k){
        int r,c; scanf("%d%d", &r, &c);
        fill_sc(P,r,c);
        ch[r] = 1;
    }

    int tmp=0;
    rep(i,8-k){
        while(ch[tmp] != 0) tmp++;
        p[i] = tmp; tmp++;
    }
    do{
        memcpy(Q,P,sizeof(P));
        int ng;
        rep(i,8-k){
            ng = 1;
            rep(j,8){
                if(Q[p[i]][j] == 0){
                    fill_sc(Q,p[i],j);
                    ng = 0;
                    break;
                }
            }
            if(ng) break;
        }
        if(ng == 0) break;
    }while(my_next_perm(8-k));
    
    rep(i,8){
        rep(j,8){
            printf("%c", Q[i][j]);
        }
        puts("");
    }
    return 0;
}
