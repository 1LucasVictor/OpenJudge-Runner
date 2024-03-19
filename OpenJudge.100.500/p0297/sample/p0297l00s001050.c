#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int head = 0;
int tail = 0;

struct Task {
  char name[10];
  int time;
};

int isEmpty() {
  if (head == tail) {
    return 1;
  } else {
    return 0;
  }
}

int isFull() {
  if (head == (tail + 1) % MAX) {
    return 1;
  } else {
    return 0;
  }
}

void enqueue(struct Task X[], struct Task Y) {
  if (isFull() == 1) {
    printf("enqueue error\n");
    exit(1);
  } else {
    X[tail] = Y;
    if (tail + 1 == MAX) {
      tail = 0;
    } else {
      tail++;
    }
  }
}

struct Task dequeue(struct Task X[]) {
  if (isEmpty() == 1) {
    printf("dequeue error\n");
    exit(1);
  } else {
    struct Task tmp = X[head];
    if (head + 1 == MAX) {
      head = 0;
    } else {
      head++;
    }
    return tmp;
  }
}

int main(void) {
  int i;
  struct Task task[MAX];
  int n, q;
  int cnt = 0;
  scanf("%d %d", &n, &q);
  for (i = 0; i < n; i++) {
    scanf("%s %d", task[i].name, &task[i].time);
  }

  tail = n;
  while (isEmpty() != 1) {
    //printf("test\n");
    struct Task tmp = dequeue(task);
    if (tmp.time - q <= 0) {
      cnt += tmp.time;
      printf("%s %d\n", tmp.name, cnt);
    } else {
      cnt += q;
      tmp.time -= q;
      enqueue(task, tmp);
    }
  }
}