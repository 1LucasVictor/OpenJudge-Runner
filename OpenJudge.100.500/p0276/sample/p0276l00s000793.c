#include<stdio.h>

int main(){

  int i,I,j,k,Ju,n,u,Adj[110][110];

  scanf("%d",&n);

 for(i=0 ; i<=n ; i++){
   for(j=0 ; j<=n ; j++){ 
   Adj[i][j] = 0;
   }
 }


  for(i=1 ; i<=n ; i++){
    scanf("%d",&I);
    scanf("%d",&k);
    for(j=1 ; j<=k ; j++){
        scanf("%d",&Ju);
        Adj[I][Ju] = 1;
  }
}

 for(i=1 ; i<=n ; i++){
   for(j=1 ; j<=n ; j++){
     printf("%d",Adj[i][j]);
     if(j != n )  printf(" ");
   }
   printf("\n");
 }   

 return 0;
}

