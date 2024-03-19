#include <stdio.h>
#define max 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 1000000000

int n, m[max][max];
int totalweight;

void prim();

int main(){

  int i, j, data;
  
  scanf("%d", &n);
  //与えられた情報を格納
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      
      scanf("%d", &data);
      
      if(data == -1) m[i][j]= INFTY;
      else m[i][j]=data;
    }
  }
  
  prim();
  
  //print
  printf("%d\n", totalweight);  

  return 0;
}
void prim(){
  int u, minv; //u...現在の頂点の場所 minv...最小の重みので行ける頂点の番号
  int d[max], parent[max], color[max];
  int v;
  int i;

  //初期設定
  for(i=0; i<n; i++){
    d[i]=INFTY;
    parent[i]= -1;//-1なら親に関して何も述べられていない状態
    color[i]=WHITE;
  }

  d[0]=0;

  while(1){

    minv=INFTY;//最小の重みで行ける頂点がない場合INFTY
    u= -1;

    for(i=0; i<n; i++){
      if( d[i]<minv && color[i]!=BLACK){
	//初回...重みがある時　2回目以降...前の頂点までの重みと比べて小さい時
	//&& まだ調べ終わってない時
	
	u=i; //今の頂点はiだよ
	minv=d[i];
      }
    }

    if(u == -1) break;
    color[u]= BLACK;

    for(v=0; v<n; v++){
      if(color[v] != BLACK && m[u][v] != INFTY){

	if( m[u][v]< d[v]){
	  d[v]=m[u][v];
	  parent[v]=u;
	  color[v]=GRAY;
	}
      }
    }
    //ここで一旦d[0]~[4], p[0]~[4], color[0]~[4]に値が入る
  }//whileへ戻る

  //whileを出ると最終的なparet[i]の親の関係図が完成した
  totalweight=0;
  for(i=0; i<n; i++){
    if(parent[i] != -1) totalweight += m[i][parent[i]];
  }

}
    
	    
     
	
	
	
    
    

  
    
  

