#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define length 100005
 
// プロセスを表す構造体
typedef struct aa{
    char name[100];
    int t;
} a;
 
// aと同じ構造で長さがlengthの構造体qを作る
a q[length];
int head, tail, n;
 
// 引数がaとxであり，xをqの末尾につけ，末尾を指すインデックスの数字を一つ増やし，あまりをだす
void enqueue(a x){
    q[tail] = x;
    tail = (tail + 1) % length;
}
 
// aの構造体でxを参照し，qの先頭をaのxに加え，先頭の大きさを一つ増やす
a dequeue() {
    a x = q[head];
    head = (head + 1) % length;
    return x;
}
 
int min(int a, int b) { return a < b ? a : b; } //最小値を返す
 
int main(){
    int e = 0;
    int c;
    int i, q1;
    a u;
    scanf("%d %d", &n, &q1);
 
    //すべてのプロセスをキューに順番に追加する
    for ( i = 1; i <= n; i++){
        scanf("%s",q[i].name);
        scanf("%d", &q[i].t);
    }
    head = 1; tail = n + 1;
 
    // シミュレーション
    while ( head != tail){
        u = dequeue();
        c = min(q1, u.t);  // qまたは必要な時間 u.t だけ処理を行う
        u.t -= c; // 残りの必要時間を計算
        e += c;  // 経過時間を加算
        if (u.t > 0) enqueue(u);  // 処理が完了していなければキューに追加
        else{
            printf("%s %d\n", u.name, e);  // 名前と経過時間を出力
        }
    }
 
    return 0;
}
