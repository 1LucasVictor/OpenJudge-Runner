#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESSES 100000

typedef struct {
  char name[16];
  int time;
} Process;

Process *queue[MAX_PROCESSES];
int p = 0, q = 0;

void push(Process *proc) {
  queue[p++] = proc;
  if (p >= MAX_PROCESSES) p = 0;
}

Process *unshift() {
  Process *proc = queue[q++];
  if (q >= MAX_PROCESSES) q = 0;
  return proc;
}

int main(int argc, char *argv[]) {
  int n, qu;
  int time = 0;
  scanf("%d %d", &n, &qu);
  for (int i = 0; i < n; i++) {
    Process *proc = malloc(sizeof(Process));
    scanf("%s %d", proc->name, &proc->time);
    push(proc);
  }
  while (p != q) {
    Process *proc = unshift();
    if (proc->time <= qu) {
      time += proc->time;
      printf("%s %d\n", proc->name, time);
      free(proc);
      continue;
    }
    proc->time -= qu;
    time += qu;
    push(proc);
  }
}