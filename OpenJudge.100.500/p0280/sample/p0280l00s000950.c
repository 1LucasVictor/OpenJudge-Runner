#include<stdio.h>

#define N 100
#define WHITE 0
#define BLACK 1
#define INF 10000

int n;
int A[N][N];


int genericMST(){
  int x=0,min,min_i,min_j;
  int i,j,k;
  int cnt=0;
  int color[n];

  for(i=0;i<n;i++) color[i] = WHITE;

  color[0] = BLACK;
  cnt++;

  while(cnt<n){

    min = INF;
    min_i = min_j = -1;

    for(i=0;i<n;i++){
      if(color[i]==WHITE) continue;
    
      for(j=0;j<n;j++){
	if(A[i][j]!=-1 && min>A[i][j] && color[j]==WHITE){
	  // printf("ppp %d %d\n",A[i][j],color[j]);
	  
	  min = A[i][j];
	  min_i = i;
	  min_j = j;
	}
      }
    
    }

    // printf("%d %d | %d\n",min_i,min_j,min);

    x += min;
    color[min_j] = BLACK;
    cnt++;
    
  }
  
  return x;
}


int main(){

  int i,j;
  int x;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  x = genericMST();

  printf("%d\n",x);
  
  return 0;
}

