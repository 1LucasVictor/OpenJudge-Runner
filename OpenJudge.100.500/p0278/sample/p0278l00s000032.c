#include <stdio.h>

int connections[101][101];
int succN[101];

int bfs(int goal);

void main() {
  int n, i, dump, k, j;

  scanf("%d", &n);

  memset(connections, 0, sizeof(connections));
  memset(succN, 0, sizeof(succN));

  for (i = 1; i < n+1; i++) {
    scanf("%d %d", &dump, &k);
    succN[i] = k;
    for (j = 0; j < k; j++) {
      scanf("%d", &connections[i][j]);
    }
  }

  for (i = 1; i < n+1; i++) {
    printf("%d %d\n", i, bfs(i));
  }
}

// returns distance from vertex 1 to goal vertex
int bfs(int goal) {
  int cur = 1, distance = 0, dequeue = 0, enqueue = 0, node, i, returnValue = 100;
  int fringe[105];
  memset(fringe, 0, sizeof(fringe));

  if (goal == cur)
    return distance;

  fringe[enqueue++] = cur;

  while (1) {
    node = fringe[dequeue];
    distance++;
    for(i = 0; i < succN[node]; i++) {
      if (connections[node][i] == goal) {
        if (distance < returnValue)
          returnValue = distance;
      }
      fringe[enqueue++] = connections[node][i];
      dequeue = enqueue-1;
    }
    if (distance == 100)
      break;
  }
  return returnValue;
}


