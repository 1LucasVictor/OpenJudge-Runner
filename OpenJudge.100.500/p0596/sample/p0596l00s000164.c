/* ex9_2
    sachiyan*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100001

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
void push(node  **first, char elem){
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
    //最初のノードの指す先
    node *first = NULL;
    char string[SIZE],last;
    int i;
    int count=0;
    //与えられた文字列の入力
    scanf("%s",string);

    //１つずつのキューブについて考える
    for(i=0;i<strlen(string);i++){
        //机の上にキューブがなければ、新たな要素をスタックに追加
        if(first==NULL){
            push(&first,string[i]);
        }
        else{
            last=pop(&first);
            //先頭と異なる色であれば何も入らず、消えたブロック２つをカウント
            if(last!=string[i]){
                count+=2;
            }
            //先頭と同じ色であれば、前と後のどちらもスタックに入る
            else{
                push(&first,last);
                push(&first,string[i]);
            }
        }
    }
    
    //答えの出力
    printf("%d\n",count);

    return 0;
}