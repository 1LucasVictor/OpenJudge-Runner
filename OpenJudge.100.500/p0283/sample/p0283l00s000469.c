#include<stdio.h>

#define MASU 8
#define Q 1
#define FREE -1
#define ENTERED 1
int A[MASU][MASU];
int row[MASU],col[MASU],dpos[2 * MASU-1],dneg[2 * MASU-1];

void Queenprint(){
  int i,j;
  for(i=0; i<MASU; i++){
    for(j=0; j<MASU; j++){
      if(A[i][j]==Q){
	if(row[i] != j)return;
      }
    }
    }

  for(i=0;i<MASU;i++){
    for(j=0; j<MASU; j++){
      if(row[i]==j)printf("Q");
      else printf(".");
      }
    printf("\n");
  }
}


void setQueen(int x){
  int i,j,k,l,t,v;
  
  if(x == MASU){
    Queenprint();
    return;
  }
  
  for(j=0; j<MASU; j++){
    if(col[j]==ENTERED || dpos[x+j] == ENTERED || dneg[x-j+MASU-1] ==ENTERED)continue;


    //(i,j)にQueenを配置
    row[x] = j;
    col[j] = dpos[x+j] = dneg[x-j+MASU-1] = ENTERED;
    //次の行を試す
    setQueen(x+1);
    //(i,j)にあるQueenを排除
    row[x]=col[j] =dpos[x+j]=dneg[x-j+MASU-1] = FREE;
  }
  //Queenの配置に失敗
}


int main(){
  int n,i,j,gyou,retsu;
  for(i=0;i<MASU;i++){
    for(j=0;j<MASU; j++){
      A[i][j]=FREE;
    }
    row[i] =FREE;
    col[i] =FREE;
  }
  for(i=0;i<2*MASU-1;i++){
    dpos[i] =FREE;
    dneg[i] =FREE;
  }
  
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d %d",&gyou,&retsu);
    A[gyou][retsu]=Q;
  }

  // printf("setQueen開始\n");
  setQueen(0);

  // printf("Queenprint開始\n");

  return 0;
}

