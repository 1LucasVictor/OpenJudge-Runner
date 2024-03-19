#include <stdio.h>

typedef struct process{
    char name[11];
    int time;
}process;

typedef struct Que{
    int rear;
    int front;
    int num;
    int max;
    process list[100001]
} que;

que que1={0,0,0,100000};
int qms;
int sum;

void enq(que *a,process x){
    a->num++;
    a->list[a->rear]=x;
    a->rear++;
    if((a->rear)>(a->max))a->rear=0;
}

void deq(que *a) {
    a->num--;
    process q = a->list[a->front];
    a->front++;
    if ((a->front) > (a->max))a->front = 0;

    process *x;
    x= &q;
    int now = 0;
    now = (x->time) - qms;
    if (now > 0) {
        x->time = now;
        sum+=qms;
        enq(&que1,q);
    }else{sum+=x->time;printf("%s %d\n",(x->name),sum);}

    return ;
}


int main() {
    int i, n;
    scanf("%d %d", &n, &qms);
    for (i = 0; i < n; i++) {
        scanf("%s %d", ((que1.list[i]).name), &((que1.list[i]).time));

        enq(&que1, (que1.list[i]));
    }

    while (que1.num > 0) {
        deq(&que1);
    }
    return 0;
}

