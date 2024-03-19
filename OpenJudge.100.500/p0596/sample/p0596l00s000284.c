/*ex 9_2
  saitomo*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100001
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
    int count=0;
    char cube_color[SIZE];
    scanf("%s", cube_color);
    //最初のノードの指す先
    node *first = NULL;
    //キューブを積み上げていく
    for(int i=0; i<strlen(cube_color); i++){
        if(first == NULL || first->elem == cube_color[i]){//色が同じなら単純に積み上げ
            push(&first, cube_color[i]);
        }else{//違うなら一つ取り除きカウントを2あげる
            pop(&first);
            count=count+ 2;
        }
    }
    printf("%d\n",count);

    return 0;
}
