/* ex 9_2 ABC 120 C
   nk777 */
 
#include<stdio.h>
#include <stdlib.h>
// リストの領域は動的確保
#define MAX 100000

// 次のリストのポインタのみ保持する単方向リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    // *firstは一番新しいデータを指す
    *first = new;
}

//スタックからデータを取り出す(削除)
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}

int main(void){
    // 消去した数を数えるcount, カウンターi
    int count = 0, i = 0;
    // 一時的に入力された文字列を受け取る
    char color[MAX];
    //最初のノードの指す先
    node *first = NULL;
    //入力された文字をスタックにノードを追加
    scanf("%s", color);
    while (color[i] != '\0')
    {
        if (first == NULL || color[i] == first->elem)
        {
            // 最初のキューブか、前と同じ色のとき
            push(&first, color[i]);
        }
        else
        {
            // 色が一個前と違うときスタックからデータを取り出す
            pop(&first);
            count += 2;
        }
        i++;
    }
    // 結果を出力
    printf("%d\n", count);
    return 0;
}
