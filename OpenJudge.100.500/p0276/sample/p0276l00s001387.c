#include<stdio.h>
#define MAX 101

main(){
  int i, j, a, b, c, v;
  int G[MAX][MAX];
  scanf("%d",&c);

  for(i = 1; i <= c; i++){
    for(j = 1; j <= c; j++){

      G[i][j] = 0;

    }
  }

  for(i = 1; i <= c; i++){

    scanf("%d %d", &b, &a);

    for(j = 1; j <= a; j++){

      scanf("%d",&v);

      G[i][v] = 1;
    }
  }


 
 for(i = 1; i <= c; i++){
    for(j = 1; j <= c; j++){

      printf("%d",G[i][j]);

      if(j < c)printf(" ");
    }
printf("\n");
 }
 return 0;
}