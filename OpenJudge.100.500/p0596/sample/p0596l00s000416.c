/* ex 9_2
   unomi */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;  // 要素を代入
    new->next = *first;  // 新しいノードの指す先にfirstの値を代入
    *first = new;  // firstを新しいノードに設定
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) return 2;  
    elem = tmp->elem;  //要素を取り出し
    *first = tmp->next;  // firstを手前に
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}

int main(void){
    char input[10*10*10*10*10], trash;
    int i=1, cnt=0;

    //最初のノードの指す先を設定
    node *first = NULL;

    // 入力の取得
    scanf("%s",input);

    // 最初の箱をスタックにpush
    push(&first, input[0]);

    // inputを先頭から確認
    while(input[i] != '\0'){
        // input[i]がfirstの色と違うならpop
        if(first != NULL && first->elem != input[i]){
            trash = pop(&first);
            cnt+=2; // 消せる箱の数をカウント
        }
        // スタックに何も入っていないか、input[i]がfirstの色と同じならpush
        else push(&first, input[i]);
        i++;
    }

    // 結果を表示    
    printf("%d\n",cnt);

    return 0;
}

