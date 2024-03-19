#include<stdio.h>

#define NIL -10

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j, e,sum,m;
  int g[MAX][MAX],a[MAX],pi[MAX],key[MAX];
  
  scanf("%d",&n);  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&g[i][j]);
      
      if(g[i][j]==-1) g[i][j]=INFTY; 
    }  
  }
  
  for(i=0;i<n;i++){
    key[i]=INFTY;
    a[i]=NIL;
    key[0]=0;
    pi[i]=-1;
  }
  
  while(1){  
    j=NIL;
    m=INFTY;
    for(i=0;i<n;i++){
      if(key[i] < m && a[i]==NIL){
	j=i;
	m=key[i];
	}
      }
    if(j==NIL) break;
    a[j]=10;
    
    for(i=0;i<n;i++){
      if(g[i][j] < key[i] && a[i]==NIL){
	key[i]=g[i][j];
	pi[i]=j;
      }
    }
  }
  sum=0;
  
  for ( i = 0; i < n; i++ ){
    if ( pi[i] != -1 ) sum += g[i][pi[i]];
  }
  printf("%d\n", sum);  
  return 0;
}