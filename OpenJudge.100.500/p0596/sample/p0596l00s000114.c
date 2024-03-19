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


int check(node **first, int *cnt){
    char trush;
    if((*first) == NULL || (*first)->next == NULL) return 0;
    else if((*first)->elem != ((*first)->next)->elem){
        trush = pop(first);
        trush = pop(first);
        (*cnt)+=2;
        return 0;
    }
    else{
        check(&((*first)->next), cnt);
        return 0;
    }
}

int main(void){
    char sentence[10*10*10*10*10];
    int i=0, c=0, *cnt = &c, prev_cnt=0;

    //最初のノードの指す先を設定
    node *first = NULL;

    // 入力の取得
    scanf("%s",sentence);

    // スタックに入力をプッシュ
    while(sentence[i] !='\0'){
        push(&first, sentence[i]);
        i++;
    } 
    
    while(first != NULL && first->next != NULL){
        prev_cnt = *cnt;
        check(&first, cnt);
        if(prev_cnt == *cnt) break;
    }

    // 結果の表示
    printf("%d\n",*cnt);

    return 0;
}

