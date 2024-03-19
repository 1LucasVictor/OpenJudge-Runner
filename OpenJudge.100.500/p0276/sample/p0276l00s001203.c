#include<stdio.h>

main(){
  int n,k,i,j,t;
    int Adj[101][101];
  int g;
  
  scanf("%d",&n);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	Adj[i][j]=0;
      }
    } 
    
    for(i=0;i<n;i++){
      scanf("%d",&g);    
      scanf("%d",&k);
      for(j=0;j<k;j++){
	scanf("%d",&t);
	Adj[g][t]=1;      
      }
    }
    
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
	if(j==n){
	  if(Adj[i][j]!=0) printf("1 ");
	  else printf("0 ");
	  break;	
	}
	
	if(Adj[i][j]!=0) printf("1 ");
	else printf("0 ");
	
      }
      printf("\n");
    }
    return 0;
}