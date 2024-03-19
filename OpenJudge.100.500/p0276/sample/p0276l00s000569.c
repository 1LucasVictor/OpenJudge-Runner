#include<stdio.h>
typedef struct{
  int u;
  int k;
  int v[100];
}NUM;
NUM Adj[101];
  
int main(){
  int n,i,j,k,flag;
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&Adj[i].u);
    scanf("%d",&Adj[i].k);
    for(j=0;j<Adj[i].k;j++){
      scanf("%d",&Adj[i].v[j]);
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      flag=0;
      for(k=0;k<n;k++){
	if(Adj[j].u==Adj[i].v[k]){
	  flag++;
	}
      }
      if(flag!=0){
	printf("1");
      }
    else{
      printf("0");
    }
      if(j!=n-1){
      printf(" ");
      }
  }
   printf("\n"); 
  }

  return 0;
}

