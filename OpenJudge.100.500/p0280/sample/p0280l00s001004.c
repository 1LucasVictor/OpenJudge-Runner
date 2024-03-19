#include<stdio.h>
#define NIL -1 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
int main(){
  int n, i, j, e, sum;
  /*your code*/
  int M[MAX][MAX],p[MAX],d[MAX],went[MAX];
  int min,u;
  scanf("%d", &n);
 
  /*表を作る*/
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
  /*your code*/
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
      d[i] = INFTY;
      went[i] = 0;  //boolean
      p[i] = NIL;
    }
  }
  d[0] = 0;/*最初のコストは０*/

  for(i=0;i<n;i++) { /*すべて連結しているため、n回まわす*/
    u = NIL;
    min = INFTY;

    /*d[u]が最小であるをu求める*/
    for(j=0;j<n;j++) {
      if(min > d[j] && (went[j] == 0)) { /* 最小cost かつ 行っていないとき */
	min = d[j];  /* 最小costの値を保存する */
	u = j;  /* 最小costの場所v[i]を保存する */
      }
    }

    if(u == NIL) break; /*全部行ったらbreak*/
    went[u] = 1; /*行ったことをcheckする*/

    for(j=0;j<n;j++) {
      if(d[j] >= M[u][j] && (went[j] == 0)) {
	p[j] = u;  /*最小costの場所vを保存*/
	d[j] = M[u][j]; 
      }
    }
  }


  sum = 0;
 
  for ( i = 0; i < n; i++ ){
    if ( p[i] != -1 ) sum += M[i][p[i]];
  }
 
  printf("%d\n", sum);
 
  return 0;
}