#include<stdio.h>

#define INF 1e9
#define MAX 150
#define NIL -1
#define W 1
#define B 0

void initial(void);
void dij(void);
int d[MAX];
int pi[MAX];
int c[MAX];
int str[MAX][MAX];
int n;


int main(){
  int i,j,k;
  int a,b;
  scanf("%d",&n);

  for(i = 1;i <= n;i++){
    for(j = 1; j <= n; j++){
     str[i][j]= NIL;
    }
  }
  
  for(i = 1;i <= n;i++){
    scanf("%d%d", &a,&k);
    for(j = 1;j<=k;j++){
      scanf("%d",&b);
      scanf("%d",&str[a+1][b+1]);
    }
  }
  dij();
  return 0;
}

void initial(void){
  int a;
  for(a = 1;a<=n;a++){
    d[a] = INF;
    pi[a] = NIL;
    c[a] = W;
  }
  d[1] = 0;
}
void dij(void){
  int i,a,b,min;
  initial();
  while(1){
    min = INF;
    for(i = 1; i <= n;i++){
      if(c[i] != B && d[i] < min){
	min = d[i];
	a = i;
      }
    }
    if(min == INF)break;
    c[a] = B;

    for(b = 1;b <= n;b++){
      if(c[b] != B && str[a][b] + d[a] < d[b] && str[a][b] != -1){
	d[b] = str[a][b];
	d[b] += d[a];
      }
    }
  }
  for(i = 1;i<=n;i++){
    printf("%d %d\n",i-1,d[i]);
  }
}
    