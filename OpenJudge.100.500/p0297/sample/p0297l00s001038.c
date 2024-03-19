#include <stdio.h>

/* プロセスに適した構造体 */
typedef struct {
    char name[11];
    int time;
} Queue;


int main()
{
    //入力
    int n, q;
    scanf("%d%d", &n, &q);

    int size = 2 * n;
    Queue Queue[size];
    int pre = 0, rear = 0, cnt = 0;
    for( rear = 0; rear < n; ++rear )
        scanf("%s %d", Queue[rear].name, &Queue[rear].time);


    //処理と出力
    while( pre != rear ){
        if( Queue[pre].time <= q ){
            cnt += Queue[pre].time;
            printf("%s %d\n", Queue[pre].name, cnt);
        } else {
            cnt += q;
            Queue[pre].time -= q;
            Queue[rear] = Queue[pre];
            rear = (rear + 1) % size;
        }

        //次の指す先
        pre = (pre + 1) % size;
    }


    return 0;
}