/* ex 8_2
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
    char sentence[10*10*10*10*10*10], tmp;
    int i=0, j=0, k=0, cnt=0, prev_cnt=1;//, end_flag=0;

    //最初のノードの指す先を設定
    node *first = NULL;

    // 入力の取得
    scanf("%s",sentence);

    // 消去数に変化がなくなるまで
    while(prev_cnt != cnt){
        // カウンタ変数の初期化
        i=0;
        j=0;
        k=0;

        // 前回までの消去数の保存
        prev_cnt = cnt;

        // 隣り合いかつ違うマスの削除
        while(sentence[i] !='\0'){
            if(sentence[i+1] =='\0'){
                push(&first, sentence[i]);
                break;
            }
            // 隣り合うマスが同じならプッシュ
            else if(sentence[i] == sentence[i+1]) push(&first, sentence[i]);
            else{
                cnt += 2;
                i++;  // インデントの調製
            }
            i++;
        }

        // 配列の初期化
        while(sentence[j] !='\0'){
            sentence[j] = 0;
            j++;
        }

        // 削除後の状態を保存
        while(1){
            //printf("%d",j);
            tmp = pop(&first);
            //underflowになったとき（全部取り出したとき）
            if(tmp == 2) break;
            sentence[k] = tmp;
            k++;
        }

    }         
    // 結果の表示
    printf("%d\n",cnt);

    return 0;
}

