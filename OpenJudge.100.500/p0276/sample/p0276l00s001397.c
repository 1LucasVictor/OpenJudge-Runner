#include <stdio.h>

#define MAX 100

int graph[100][100];

int main(){

  int i, j, num, inum, jnum, line;

  scanf("%d", &num);

  for(i = 0; i < num; i++){

    for(j = 0; j < num; j++){

      graph[i][j] = 0;

    }

    scanf("%d %d", &inum, &jnum);

    for(j = 0; j < jnum; j++){

      scanf("%d", &line);

      graph[inum - 1][line - 1] = 1;

    }

  }

  for(i = 0; i < num; i++){

    for(j = 0; j < (num - 1); j++){

      printf("%d ", graph[i][j]);

    }

    printf("%d\n", graph[i][j]);

  }


  return 0;

}