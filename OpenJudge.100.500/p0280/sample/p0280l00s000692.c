#include<stdio.h>
#define INF 2140000000
#define N 102
#define white 0
#define gray 1
#define black 2

//最小全域木はそれぞれの辺の最小の総和を計算するプログラム

int color[N],p[N],d[N];      //ｐは親、ｄは距離

void prim(int a[][N],int n){
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
      if(color[i]!=black && a[u][i]!=-1 && d[i]>a[u][i]){  //辺があり、一番小さいものを探し出す
	d[i]=a[u][i];
	p[i]=u;
	color[i]=gray;
      }
    }
  }
}

void print(int a[][N], int n){
  int sum=0,i;
  for(i=1;i<n;i++){    //0は距離がないので、１から始まる。
    sum+=a[i][p[i]];  //２次配列が対称になっているため
  }
  printf("%d\n",sum);
}

int main(){
  int a[N][N],n,i,j,result;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }

  prim(a,n);
  print(a,n);

  return 0;
}

