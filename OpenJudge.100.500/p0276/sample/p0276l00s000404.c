#include <stdio.h>
#define N 120


main(){

  int n,u,k,ad[N][N],i,j,v;


  scanf("%d",&n);

  for(i=0; i<n; i++){

    scanf("%d%d",&u,&k);
    
    for(j=0; j<k; j++){

      scanf("%d",&v);

	ad[u-1][v-1]=1;

    }

  }

  for(i=0; i<n; i++){

    for(j=0; j<n; j++){

      if(ad[i][j]==1)
	printf("1");
      else
	printf("0");
     
      if(j!=n-1)
      printf(" ");

    }

    printf("\n");

  }

  return 0;

}