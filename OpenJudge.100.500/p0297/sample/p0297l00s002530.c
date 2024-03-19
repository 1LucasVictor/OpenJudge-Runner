#include <stdio.h>
#include <string.h>
typedef struct proces {
  char name[10];
  int t;
  int flag;
} P;

P S[100005];
int head, tail, n;

void enqueue(P x) {
  S[tail] = x;
  tail = (tail + 1) % 100005;
}

P dequeue() {
  P x = S[head];
  head = (head + 1) % 100005;
  return x;
}

int min(int x, int y) {
  if (x > y)
    return y;
  else
    return x;
}
int main() {
  int spend = 0, c, i, qp;
  P in;

  scanf("%d %d", &n, &qp);
  for (i = 1; i <= n; i++) {
    scanf("%s", S[i].name);
    scanf("%d", &S[i].t);
    S[i].flag = 1;
  }
  head = 1;
  tail = n + 1;
  while (head != tail) {
    in = dequeue();
    c = min(qp, in.t);
    in.t -= c;
    spend += c;
    if (in.t > 0) {
      enqueue(in);
    } else if (in.flag == 1) {
      printf("%s %d\n", in.name, spend);
      in.flag = 0;
    }
  }
  return 0;
}

