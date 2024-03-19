#include<stdio.h>
#define MAX 100005

typedef struct{
    char name[100];
    int x;
}P;

int head , tail, n;
P queue[MAX];
void enqueue(int x)
{
    queue[tail] = queue[head - 1];
    queue[tail].x = x;

    if( (tail + 1) == MAX ){
        tail = 0;
    }else{
        tail++;
    }
}


int dequeue()
{
    int x = queue[head].x;
    if( (head + 1) == MAX ){
        head = 0;
    }else{
        head++;
    }
    return x;
}


int main()
{
    int q, i, time = 0, tmp;
    scanf("%d %d", &n, &q);
    for( i = 0; i < n; i++ ){
        scanf("%s%d", queue[i].name, &queue[i].x);
    }
    head = 0; tail = n;
    while( head != tail ){
        tmp = dequeue();
        if( tmp > q ){
            time += q;
            tmp -= q;
            enqueue(tmp);
        }else{
            time += tmp;
            printf("%s %d\n", queue[head - 1].name, time);
        }
    }
    return 0;
}