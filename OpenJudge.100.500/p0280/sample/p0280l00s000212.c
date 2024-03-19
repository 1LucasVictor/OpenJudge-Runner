#include<stdio.h>
#define MAX 101
typedef struct {
  int i1;//行
  int j1;//列
  int w;//重み
} Cnt;
int n;//n:入力, i,j:繰り返し用
int S[MAX][MAX];//入力
int tag[MAX];//tag付け用

void tagging(int x,int y){
    int k,i;
    k = tag[x];
    for(i=0;i<n;i++){
        if(tag[i]==k) tag[i]=tag[y];
    }            
}

void Kruskal(){
    int s=0,t=1,cost=0,i,j;
    Cnt C[4900],tmp;
    //Cに辺の情報を記録
    for(i=0;i<n-1;i++){
        for(j=t;j<n;j++){
            if(S[i][j]!=-1){
                C[s].i1 = i;
                C[s].j1 = j;
                C[s].w = S[i][j];
                s++;
            }
        }
        t++;
    }
    //昇順ソート
    for(i=0; i<s; ++i) {
        for(j=i+1; j<s; ++j) {
            if(C[i].w > C[j].w) {
                tmp = C[i];
                C[i] = C[j];
                C[j] = tmp;
            }
        }
    }
    //tag初期化
    for(i=0;i<MAX;i++) tag[i]=i;
    //tag付け、重み総和計算
    for(i=0,t=0; t<n-1; i++){
        if(tag[C[i].i1]!=tag[C[i].j1]){
            cost+=C[i].w;
            if(tag[C[i].i1] >= tag[C[i].j1]) tagging(C[i].i1,C[i].j1);                          
            else                             tagging(C[i].j1,C[i].i1);
            t++;
        }
    }
    printf("%d\n", cost);
}

int main(void){
    int m,i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            scanf("%d",&m);
            S[i][j] = m;
        }
    }
    Kruskal();
    return 0;
}
