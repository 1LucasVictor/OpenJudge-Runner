#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
    char name[100];
    int t;
} p;

p Q[LEN];
int head, tail, n;

void enqueue(p x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

p dequeue(){
    p x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b) { return a < b ? a : b ; }

int main()
{
    int elaps = 0, c;
    int i, q;
    p u;
    scanf("%d %d", &n, &q);

    for( i = 1; i <= n; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }
    head = 1; tail = n + 1;

    while(head != tail){
        u = dequeue();
        c = min(q,u.t);
        u.t -= c;
        elaps += c;
        if( u.t > 0) enqueue(u);
        else{
            printf("%s %d\n", u.name, elaps);
        }
    }


    return 0;
}

