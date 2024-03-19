#include<stdio.h>
#define INF 2140000000
#define N 102
#define white 0
#define gray 1
#define black 2

int color[N],p[N],d[N];      //ｐは親、ｄは距離

void dijkstra(int a[][N],int n){
  int i,mincost,u;

  for(i=0;i<n;i++){           //色と距離を初期化
    color[i]=white;
    d[i]=INF;
  }

  d[0]=0;                  //配列の０から考えるので、d[0]の距離は０で親はいないのでp[0]はー１
  p[0]=-1;

  while(1){
    mincost=INF;

    for(i=0;i<n;i++){             //辺の中で一番小さいものを探す
      if(color[i]!=black && d[i]<mincost){
        mincost=d[i];
        u=i;
      }
    }

    if(mincost==INF) break;     //すべての探索が終わっている場合、プログラムを終了させる

    color[u]=black;          //移動した先の頂点を黒にする

    for(i=0;i<n;i++){
      if(color[i]!=black && a[u][i]!=-1 && d[i]>a[u][i]+d[u]){  //辺があり、一番小さいものを探\\
し出す
        d[i]=a[u][i]+d[u];
        p[i]=u;
        color[i]=gray;
      }
    }
  }
}

void print(int a[][N], int n){
  int i;
  for(i=0;i<n;i++){    //0は距離がないので、１から始まる。
    printf("%d %d\n",i,d[i]);
  }
}

int main(){
  int a[N][N],n,i,j,v,k,u,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=-1;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      a[u][v]=c;
    }
  }

  dijkstra(a,n);
  print(a,n);

  return 0;
}
