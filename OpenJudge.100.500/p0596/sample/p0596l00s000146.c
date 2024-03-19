/* ex9_2
    fmuacshai */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
# define SIZE 100001
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
    //node型のcubefurstを初期化して定義
    node *cubefirst=NULL;
    //消去数カウントのcountとfor文で使うiを定義
    int count=0,i;
    //入力された配列をarrayとして定義
    char array[SIZE];
    //入力
    scanf("%s",array);
    //入力数だけ繰り返す
    for(i=0;i<strlen(array);i++){
        //空だった時と同じ数字が連続しているときは追加
        if(cubefirst==NULL||array[i]==cubefirst->elem){
            push(&cubefirst,array[i]);
        //異なる数字が入力されたときは取り出す
        }else{
            pop(&cubefirst);
            //消去した分を追加
            count+=2;
        }
    }
    //結果を出力
    printf("%d\n",count);
    return 0;
}
