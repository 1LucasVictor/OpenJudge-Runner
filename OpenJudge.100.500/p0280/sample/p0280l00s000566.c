#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

#define BUF_SIZE 500

int* fget_array(int *arr, int size, char *line) {
  char *tmpbuf = line;
  int i;
  for(i = 0; i < size; i++) {
    char *tmp = strtok(tmpbuf, " ");
    arr[i] = strtol(tmp, NULL, 10);
    tmpbuf = NULL;
  }
  return arr;
}

struct list {
  struct list *next;
  int dst;
  int cost;
};

struct pair {
  int node;
  int cost;
};

struct list *create_graph(int size) {
  struct list *graph = malloc(sizeof(struct list)*size);
  int i;
  for(i = 0; i < size; i++) {
    graph[i].next = &graph[i];
  }
  return graph;
}

void insert(struct list *graph, int src, int dst, int cost) {
  struct list *head = &graph[src];
  struct list *elem = malloc(sizeof(struct list));
  elem->next = head->next;
  head->next = elem;
  elem->dst = dst;
  elem->cost = cost;
}

#define HEAP_SIZE 100
   
struct pair heap[HEAP_SIZE];
int pos = 1;

int is_empty(void) {
  return pos == 1;
}

void swap(struct pair *pa, struct pair *pb) {
  struct pair tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

// create min_heap
void enqueue(int node, int cost) {
  int idx = pos;
  struct pair p;
  p.node = node; p.cost = cost;
  heap[pos++] = p;
  int parent;
  while((parent = idx/2)) {
    if(heap[parent].cost > heap[idx].cost) {
      swap(&heap[parent], &heap[idx]);
      idx = parent;
    } else { break; }
  }
}

struct pair fetch_min(void) {
  struct pair res = heap[1];
  struct pair last = heap[--pos];
  int idx = 1;
  heap[idx] = last;
  // fix
  while(1) {
    int left = idx * 2;
    int right = idx * 2 + 1;
    int smallest = idx;
    if(left < pos && heap[smallest].cost > heap[left].cost) {
      smallest = left;
    }
    if(right < pos && heap[smallest].cost > heap[right].cost) {
      smallest = right;
    }

    if(smallest != idx) {
      swap(&heap[smallest], &heap[idx]);
      idx = smallest;
    } else { break; }
  }
  return res;
}

int main(void) {
  char line[BUF_SIZE];
  FILE *fp = stdin;

  if(!fgets(line, BUF_SIZE, fp)) return 0;
  int num;
  sscanf(line, "%d", &num);

  struct list *graph = create_graph(num);

  int i, j;
  for(i = 0; i < num; i++) {
    if(!fgets(line, BUF_SIZE, fp)) return 0;
    char *tmpbuf = line;
    for(j = 0; j < num; j++) {
      char *tmp = strtok(tmpbuf, " ");
      int n = strtol(tmp, NULL, 10);
      if(n!=-1) insert(graph, i, j, n);
      tmpbuf = NULL;
    }
  }

  char checked[100] = {0};
  enqueue(0, 0);
  int sum = 0;
  while(!is_empty()) {
    struct pair p = fetch_min();
    if(checked[p.node]) continue;
    checked[p.node] = 1;
    sum += p.cost;
    // searched in checked set.
    int min = INT_MAX;
    int min_node = -1;
    for(i = 0; i < num; i++) {
      if(!checked[i]) continue;
      struct list *head = &graph[i];
      struct list *tmp;
      for(tmp = head->next; tmp != head; tmp = tmp->next) {
        if(checked[tmp->dst]) continue;
        if(min > tmp->cost) {
          min_node = tmp->dst;
          min = tmp->cost;
        }
      }
    }
    if(min_node != -1) enqueue(min_node, min);
  }
  printf("%d\n", sum);
  return 0;
}
