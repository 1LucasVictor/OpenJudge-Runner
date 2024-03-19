#include <stdio.h>

#define MAX 100

int main(){

  int n,i,j,tmp;

  int tyouten[MAX],dekazu[MAX],ikisaki[MAX][MAX];

  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++) ikisaki[i][j]=0;
}

  scanf("%d",&n);

  for(i=0;i<n;i++){

    scanf("%d%d",&tyouten[i],&dekazu[i]);

    for(j=0;j<dekazu[i];j++){
      
      scanf("%d",&tmp);

      ikisaki[i][tmp-1]=1;

    }
  }

  for(i=0;i<n;i++){

    for(j=0;j<n;j++){

      if(j==n-1) printf("%d",ikisaki[i][j]);

	else printf("%d ",ikisaki[i][j]);

      /*      if(ikisaki[i][j]==1) printf("1 ");
      else printf("0 ");
      */
}

    printf("\n");

}

  return 0;

}