/*
 * Problem Description: Stack
 * Category:
 * Author: Khan
 * Date: 12th October, 2017
 */

#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct{
    char name[100];
    int t;
}Task;

Task Queue[LEN];
int head, tail, n;

void enqueue(Task x)
{
    Queue[tail] = x;
    tail = (tail + 1) % LEN;
}

Task dequeue()
{
    Task x = Queue[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int elaps = 0, c;
    int q;
    Task u;
    scanf("%d %d", &n, &q);
    
    for (int i = 1; i <= n; ++i)
    {
        scanf("%s", Queue[i].name);
        scanf("%d", &Queue[i].t);
    }
    head = 1;
    tail = n + 1;

    while(head != tail)
    {
        u = dequeue();
        c = min(q, u.t);
        u.t -= c;
        elaps += c;
        if(u.t > 0)
            enqueue(u);
        else
        {
            printf("%s %d\n", u.name, elaps);
        }
    }
    return 0;
}