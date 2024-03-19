/*ex9-2
  Sweet_Sweet_Soul*/


#include <stdio.h>
#include <stdlib.h>

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
    int count=0;/*答えのカウント*/
    char cube[100001];/*100000文字なのでnull文字含めて確保*/
    char *ptr;/*文字列操作用のポインタ*/
    char tmp;/*pop用の変数*/
    node *list=NULL;/*リスト用のポインタ*/
    scanf("%s",cube);
    ptr=cube;
    while(*ptr!='\0'){
        if(list==NULL || list->elem==*ptr){ /*listの一番上とptrの現在地が一緒 or listが空の場合*/
            push(&list,*ptr);
        }
        else{ /*listの一番上とptrの現在地が一緒*/
            pop(&list);/*listとcubeで一つづつ除去*/
            count=count+2;/*取り出した数をカウント*/
        }
        ptr++;
    }
    printf("%d",count);
    return 0;
}
