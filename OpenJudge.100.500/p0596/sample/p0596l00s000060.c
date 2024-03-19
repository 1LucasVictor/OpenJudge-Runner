/* ex9_2
   reo012 */

#include <stdio.h>
#include <stdlib.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//リストにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
    return;
}

//リストからデータを削除する
void pop(node **first){
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return;
}

int main(void){
    char input_s[100001];
    int i, count=0;
    //最初のノードの指す先
    node *first = NULL;

    //入力
    scanf("%s", input_s);

    //入力された文字列の情報をリストに順に追加
    //ただし、i-1回目に追加されたキューブがi回目のキューブと異なるなら、i-1回目をリストから削除
    for(i=0; input_s[i]!='\0'; i++){
        if(first==NULL || input_s[i]==first->elem){ //最初のキューブ・一個前と同じキューブ
            push(&first, input_s[i]);   //リストに追加
        }else{  //一個前のキューブと異なるとき
            pop(&first);    //一個前のキューブ（リストの先頭にある）を削除
            count += 2;     //countを2増やす
        }
    }
    //答えのcountを出力
    printf("%d\n", count);
    return 0;
}