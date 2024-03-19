#define N 100005
#include <stdio.h>
struct task {
    char name[15];
    int time;
};

struct task tasks[N];
int head, tail = 0;

void enqueue(struct task x) {
    tasks[tail] = x;
    tail = (tail + 1) % N;
}

struct task dequeue() {
    struct task t = tasks[head];
    head = (head + 1) % N;
    return t;
}

int main() {
    int time = 0;  //记录总时间
    int n, q = 0;  //任务数和时间片长度
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", tasks[i].name, &tasks[i].time);
    }
    head = 0;
    tail = n;
    while (head != tail) {
        struct task t = dequeue();
        if (t.time <= q) {
            time += t.time;
            printf("%s %d\n", t.name, time);
        }
        else {
            time += q;
            t.time -= q;
            enqueue(t);
        }
    }
    return 0;   
}
