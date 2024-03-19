#include <stdio.h>
#include <string.h>

#define MAX 100000

int mark = 0;

struct Task {
  char name[10];
  int time;
};

int isEmpty() {
  if (mark == 0) {
    return 1;
  } else {
    return 0;
  }
}

int isFull() {
  if (mark == MAX - 1) {
    return 1;
  } else {
    return 0;
  }
}

void enqueue(struct Task X[], struct Task Y) {
  X[mark] = Y;
  mark++;
}

struct Task dequeue(struct Task X[]) {
  struct Task tmp = X[0];
  int i;
  for (i = 1; i < mark; i++) {
    X[i - 1] = X[i];
  }
  mark--;
  return tmp;
}

int main(void) {
  int i;
  struct Task task[MAX];
  int n, q;
  int cnt = 0;
  char tmp_name[10];
  int tmp_time;
  scanf("%d %d", &n, &q);
  for (i = 0; i < n; i++) {
    scanf("%s %d", tmp_name, &tmp_time);
    strcpy(task[i].name, tmp_name);
    task[i].time = tmp_time;
  }

  mark = n;
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