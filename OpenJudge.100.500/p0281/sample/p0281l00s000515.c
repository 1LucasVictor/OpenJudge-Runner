#include<stdio.h>
#define MA 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 10000000


int n,A[MA][MA];



void a(){
  int w;
  int s[MA],co[MA];
  
  for(int i = 0;i<n;i++){
    s[i] = INFTY;
    co[i] = WHITE;
  }

  s[0] = 0;
  co[0] = GRAY;
  while(1){
    w = INFTY;
    int q = -1;
    for(int i = 0;i<n;i++){
      if(w >s[i]&&co[i]!=BLACK){
	q = i;
	w = s[i];
      }
    }
    if(q == -1)break;
    co[q] = BLACK;
    for(int x = 0;x<n;x++){
      if(co[x]!=BLACK&&A[q][x]!=INFTY){
	if(s[x] >s[q]+A[q][x]){
	  s[x]= s[q]+A[q][x];
	  co[x] = GRAY;
	}
      }
    }
  }
  for(int i = 0;i<n;i++){
    printf("%d %d\n",i,s[i]);
  }
}
      
  
  

int main(){
  int v,k,u,c,i,j;
  

  scanf("%d",&n);
  for(i = 0;i<n;i++){
    for(j= 0;j<n;j++){
      A[i][j] = INFTY;
    }
  }
  

  for( i = 0;i<n;i++){
    scanf("%d%d",&v,&k);
    for(j = 0;j<k;j++){
      scanf("%d%d",&u,&c);
      A[v][u] = c;
    }
  }


  a();
  
     




  return 0;
}


