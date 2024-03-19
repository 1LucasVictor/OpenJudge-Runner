#include <stdio.h>
#define FREE 0
#define NOT_FREE 1
#define N 8

int row[N];
int col[N];
int dpos[20], dneg[20];
char a[N][N];

void putQueen(int);
void print();

int main(){

  int n, i, r, c, j, k;

  scanf("%d", &n);

  for(i=0; i<n; i++){ //error
    scanf("%d %d", &r, &c);

    a[r][c]='Q';//あらかじめQと分っているところには先に入れておく
  }
  putQueen(0); //i=0から順にQを置いていく

  //print
  
  return 0;
}

void putQueen(int i){

  int j;

  if(i==N){
    print();
    return;
  }
  for(j=0; j<N; j++){

    if(col[j]==NOT_FREE ||
       dpos[i+j]== NOT_FREE ||
       dneg[i-j+N-1]== NOT_FREE){
      continue;
    } // 縦・横・斜めにQが既にあるなら

    //ないならQを置く
    row[i]=j; //i行目にはj列にQがある
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;//Qを置いたのでNOT_FREEを印

    //next row ex) j=2でQ置いたら次の行に行く

    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}
void print(){

  int i, j;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){

      if(a[i][j]=='Q'){
	if(row[i]!=j) return;
      }
    }
  }
    
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  
}

    

