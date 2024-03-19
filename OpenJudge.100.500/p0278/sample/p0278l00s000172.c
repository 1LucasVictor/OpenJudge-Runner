#include <stdio.h>
#include <stdlib.h>

#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,time,head,tail;
int *queue;
int *dist;
int *color;
int **matrix;

void enqueue(int);
int dequeue(void);
void bfs(void);

int main(){
  int i,j,u,k,v;

  scanf("%d",&n);

  queue = malloc(n * sizeof(int));
  color = malloc(n * sizeof(int));
  dist = malloc(n * sizeof(int));

  matrix = malloc(n * sizeof(int *));
  for(i = 0 ; i < n ; i++){
    matrix[i] = malloc(n * sizeof(int));
 }
 for(i = 0 ; i < n ; i++){
   dist[i] = -1;
 }
 for(i = 0 ; i < n ; i++){
   for(j = 0 ; j < n ; j++){
     matrix[i][j] = 0;
   }
 }

 for(i = 0 ; i < n ; i++){
    scanf("%d",&u); u--;
    scanf("%d",&k);
    for(j = 0 ; j < k ; j++){
      scanf("%d",&v); v--;
      matrix[u][v] = 1;
    }
  }

  bfs();
  for(i = 0 ; i < n ; i++){
    printf("%d %d\n",i+1,dist[i]);
  }

  for(i = 0 ; i < n ; i++){
    free(matrix[i]);
  }
  free(matrix);
  free(queue);
  free(dist);
  free(color);
  return 0;
}

void bfs(){
  int u,i;
  for(i = 0 ; i < n ; i++){
    color[i] = WHITE;
  }
  head = tail = 0;
  color[0] = GRAY;
  dist[0] = 0;
  enqueue(0);

  while(head != tail){
    u = dequeue();
    for(i = 0 ; i < n ; i++){
      if(matrix[u][i] == 1 && color[i] == WHITE){
        color[i] = GRAY;
        dist[i] = dist[u] + 1;
        enqueue(i);
      }
    }
    color[u] = BLACK;
  }
}

void enqueue(int q){
  queue[tail] = q;
  if(++tail == n) tail = 0;
}

int dequeue(){
  int v = queue[head];
  if(++head == n) head = 0;
  return v;
}