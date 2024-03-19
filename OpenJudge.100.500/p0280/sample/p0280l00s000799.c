#include<stdio.h>
#include<stdlib.h>

#define MAX_HEAP_SIZE 100
#define MAX_V 100
#define INF_POS 2000000001
#define INF_NEG -2000000001
#define NIL -1

typedef struct vtx{
  int id;
  int minDistToMST;
  int parent;
  int idxInHeap;
} Vertex;

typedef struct edg{
  int dist;
  int to;
} Edge;
  
Vertex* heap[MAX_V + 1];
Vertex V[MAX_V + 1];
Edge **distMatrix;
int numOfEdgeFrom[MAX_V + 1];

int hsize = 0;

int left(int id);

int right(int id);

int parent(int id);

void minHeapify(int rootId);
void buildMinHeap(void);

Vertex* heapMinimum();
Vertex* heapExtractMinimum();
void heapDecreaseKey(int id, int key);
void minHeapInsert(int key);

void Prim(int start);

//for debug
void printEdges(){
  for(int i = 1; i < 10; i++){
    printf("i = %d", i);
    for(int j = 0; j < numOfEdgeFrom[i]; j++){
      printf(" to %d(cost %d)", distMatrix[i][j].to, distMatrix[i][j].dist);
    }
    printf("\n");
  }
}

//for debug
void printHeap() {
  for(int i = 1; i <= 10; i++){
    printf("id %d dist %d parent %d\n", heap[i]->id, heap[i]->minDistToMST, heap[i]->parent);
  }
}

int main(){
  int n;

  distMatrix = (Edge **)malloc(sizeof(Edge *)*(MAX_V + 1));

  scanf("%d", &n);
  int tmp[MAX_V + 1];
  for(int i = 1; i <= n; i++){
    int count = 0;
    //一度適当に読み取っておく
    for(int j = 1; j <= n; j++){
      scanf("%d", &tmp[j]);
      if(tmp[j] != -1) {
	count++;
      }
    }

    distMatrix[i] = (Edge *)malloc(sizeof(Edge)*count);

    //今度は真面目に記録する
    int k = 0;
    for(int j = 1; j <= n; j++){
      if(tmp[j] != -1){
	Edge tmpEdge = {tmp[j], j};
	distMatrix[i][k] = tmpEdge;
	k++;
      }
    }
    numOfEdgeFrom[i] = count;
  }

  //printEdges();
  Prim(1);

  int result = 0;
  for(int i = 1; i <= n; i++){
    //printf("i = %d cost %d\n", i, V[i].minDistToMST);
    result += V[i].minDistToMST;
  }
  printf("%d\n", result);
  
  return 0;
}

int parent(int id){
  return id/2;
}

int left(int id){
  return 2*id;
}

int right(int id){
  return 2*id + 1;
}

void minHeapify(int rootId){
  int l = left(rootId);
  int r = right(rootId);
  int smallest;
  
  //左の子、自分、右の子で値が最小のノードを選ぶ
  if(l <= hsize && heap[l]->minDistToMST < heap[rootId]->minDistToMST){
    smallest = l;
  }
  else {
    smallest = rootId;
  }

  if(r <= hsize && heap[r]->minDistToMST < heap[smallest]->minDistToMST){
    smallest = r;
  }

  Vertex* tmp;
  if(smallest != rootId){ //rootIdの子の方が値が小さいとき
    heap[rootId]->idxInHeap = smallest;
    heap[smallest]->idxInHeap = rootId;
    
    tmp = heap[rootId];
    heap[rootId] = heap[smallest];
    heap[smallest] = tmp;
    minHeapify(smallest);
  }
}

void buildMinHeap(){
  for(int i = hsize/2 ; i >= 1; i--){
    minHeapify(i);
  }
}
    
Vertex* heapMinimum(){
  return heap[1];
}

Vertex* heapExtractMin(){
  if(hsize < 1){
    printf("ERROR: HEAP UNDER FLOW\n");
    exit(1);
  }

  Vertex* min = heap[1];
  heap[1]->idxInHeap = -1;
  heap[1] = heap[hsize];
  heap[1]->idxInHeap = 1;
  hsize--;
  minHeapify(1);
  return min;
}
    
void heapDecreaseKey(int id, int key){
  //printf("(%d %d)\n", id, key);
  if(key > heap[id]->minDistToMST){
    printf("ERROR: KEY VALUE IS LARGER");
    exit(1);
  }
  heap[id]->minDistToMST = key;
  while(id > 1 && heap[parent(id)]->minDistToMST > heap[id]->minDistToMST){
    //printf("swap %d and %d\n", id, parent(id));
    heap[id]->idxInHeap = parent(id);
    heap[parent(id)]->idxInHeap = id;
    
    Vertex* tmp = heap[id];
    heap[id] = heap[parent(id)];
    heap[parent(id)] = tmp;
    id = parent(id);
  }
}

void minHeapInsert(int key){
  hsize++;
  heap[hsize]->minDistToMST = INF_POS;
  heapDecreaseKey(hsize, key);
}

void Prim(int start){
  for(int i = 1; i <= MAX_V ; i++){
    V[i].id = i;
    V[i].minDistToMST = INF_POS;
    V[i].parent = NIL;
    V[i].idxInHeap = i;
    heap[i] = &V[i];
  }

  V[start].minDistToMST = 0;
  hsize = MAX_V;
  buildMinHeap();

  // printHeap();
  
  while(hsize > 0){
    Vertex u = *heapExtractMin();
    ///printf("from %d\n", u.id);
    for(int i = 0; i < numOfEdgeFrom[u.id]; i++){
      //printf("edge %d", i);
      Edge edge = distMatrix[u.id][i];
      //printf("to %d (cost %d)\n", edge.to, edge.dist);
      if(V[edge.to].idxInHeap >= 1 && edge.dist < V[edge.to].minDistToMST){
	V[edge.to].parent = u.id;
	V[edge.to].minDistToMST = edge.dist;
	//printf("decrease\n");
	heapDecreaseKey(V[edge.to].idxInHeap, edge.dist);
	//printHeap();
	//	printf("========================\n");
      }
    }

    //  printf("==========================\n");
    //printHeap();
  }
}

