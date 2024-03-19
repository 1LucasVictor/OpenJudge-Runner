#include<stdio.h>

int Adj[101];

int main()
{
  int i,j,n,u,k,c;

  scanf("%d",&n);

  for(i=1; i<=n; i++){
    c=0;
    scanf("%d%d",&u,&k);

    for(j=0; j<k; j++){
      scanf("%d",&Adj[j]);
    }

    for(j=1; j<=n; j++){
      if(j!=1)
	printf(" ");
      if(Adj[c] == j && c != k){
	printf("1");
	c++;
      }
      
      else
	printf("0");
    }
    printf("\n");
  }

  return 0;
}
