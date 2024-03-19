/* ex9_2
    sachiyan*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//スタックからデータを取り出す
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
    char string[100001];
    char i;
    char last;
    int count;
    //最初のノードの指す先
    node *first = NULL;

    //文字列を読み込む
    scanf("%s", string);
    //消されたキューブの個数を初期化
    count = 0;

    for(i=0;i<strlen(string);i++){
        if(first==NULL){
            push(&first,string[i]);
        }
        else{
            last=pop(&first);
            if(last==string[i]){
                push(&first,last);
                push(&first,string[i]);
            }else{
                count+=2;
            }
        }
    }
/*
    //１つ１つのキューブについて考える
    for(i=0; i< strlen(string); i++){
        //スタックが空の場合
        if(first == NULL){
            //後ろのキューブがスタックに入る
            push(&first, string[i]);
        //最後のキューブが次の文字と同じ場合
        }else if((first->elem == '0' && string[i] == '0') ||(first->elem == '1' && string[i] == '1')){
            //後ろのキューブがスタックに入る
            push(&first, string[i]);
        //最後のキューブが次の文字と異なる場合
        }else if((first->elem == '0' && string[i] == '1') ||(first->elem == '1' && string[i] == '0')){
            //前のキューブが一つ消える
            pop(&first);
            count +=2;
        }
    }
    */
    //答えの出力
    printf("%d\n", count);
    return 0;
}

