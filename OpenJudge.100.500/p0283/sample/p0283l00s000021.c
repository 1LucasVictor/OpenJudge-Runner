#include<stdio.h>
#define Q 8
int Search(int *,int);

int main(){
  int queens[Q];
  int n,k,i,j;
  scanf("%d",&n);
  for(i=0;i<Q;i++)queens[i]=-1;
  while(n--){
    scanf("%d %d",&i,&j);
    queens[i]=j;
  }
  Search(&queens[0],0);

  for(i=0;i<Q;i++){
    for(j=0;j<Q;j++){
      if(queens[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }

  return 0;
}

int Search(int *queens,int k){
  int i,j;
  int check[Q];
  if(k == Q)return 1;
  if(queens[k] != -1){
    if(0 == Search(queens,k+1))return 0;
    else return 1;
  }
  for(i=0;i<Q;i++)check[i]=0;
  for(i=0;i<Q;i++)if(queens[i] != -1){
      check[queens[i]] = 1;
      for(j=0;j<Q;j++)if( k+j == queens[i]+i || k - j == i - queens[i] )check[j]=1;
    }
  //printf("%d check:",k);
  //for(i=0;i<Q;i++)printf(" %d",check[i]);
  //printf("\n");
  for(i=0;i<Q;i++)if(check[i] == 0){
      queens[k]=i;
      if(1 == Search(queens,k+1))return 1;
    }
  queens[k]=-1;
  return 0;
}
    
      
  

    
      
      
    
			    

