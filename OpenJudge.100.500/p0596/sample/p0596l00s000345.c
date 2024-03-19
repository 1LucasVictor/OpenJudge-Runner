/*ex9-2 C- Unification
ryo_1129*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000
//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

void pop(node **first);
void push(node **first, char elem);

int main(void){
    int counter=0;
    char cube_color[SIZE+1];
    scanf("%s", cube_color);
    //最初のノードの指す先
    node *first = NULL;
    //キューブを積み上げていく
    for(int i=0; cube_color[i] != '\0'; i++){
        if(first == NULL || first->elem == cube_color[i]){
            push(&first, cube_color[i]);
        }else{
            pop(&first);
            counter += 2;
        }
    }
    printf("%d\n",counter);

    return 0;
}

//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//スタックからデータを取り除く
void pop(node **first){
    node *tmp = *first;
    *first = tmp->next;
    //取り除いたノードのメモリを解放
    free(tmp);
}