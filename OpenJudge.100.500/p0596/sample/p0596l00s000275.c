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

/*int check(node *first, int *cnt){
    char trush;
    if((first->next)->elem == NULL) return 1;
    else if(first->elem != (first->next)->elem){
        printf("%c\n",first->elem);
        trush = pop(&first);
        trush = pop(&first);
        (*cnt)+=2;
        printf("%c\n",first->elem);
        return 0;
    }
    else{
        check(first->next, cnt);
        return 0;
    }
}*/

int check(node **first, int *cnt){
    //puts("!!!");
    char trush;
    //node *tmp = *first;
    //*tmp = (*tmp)->next;
    //printf("%c",(*first)->next->elem);
    //if(*first == NULL || (*first)->next == NULL) return 0;
    if((*first)->next == NULL) return 0;
    else if((*first)->elem != ((*first)->next)->elem){
        //puts("ue");
        //printf("%c %c\n",(*first)->elem, ((*first)->next)->elem);
        trush = pop(first);
        trush = pop(first);
        (*cnt)+=2;
        //puts("!!!");
        //printf("%c\n",(*first)->elem);
        //puts("!!!");
        return 0;
    }
    else{
        //*tmp = (*first)->next;
        //puts("shita");
        check(&((*first)->next), cnt);
        return 0;
    }
}

int main(void){
    char sentence[10*10*10*10*10];
    int i=0, c=0, *cnt = &c, prev_cnt=0;//, end_flag=0;

    //最初のノードの指す先を設定
    node *first = NULL;

    // 入力の取得
    scanf("%s",sentence);

    /*while(1){
        // カウンタ変数の初期化
        i=0;
        j=0;
        k=0;
        // 隣り合いかつ違うマスの削除
        while(sentence[i] !='\0' || sentence[i+1] !='\0'){
            // 隣り合うマスが違うならプッシュ
            if(sentence[i] != sentence[i++]){
                push(&first, sentence[i]);
                push(&first, sentence[i+1]);
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
    }*/
    // スタックに入力をプッシュ
    while(sentence[i] !='\0'){
        push(&first, sentence[i]);
        i++;
    }

    //while(first->next != NULL){
    
    
    while(first != NULL && first->next != NULL){
        //printf("start:%c\n",first->elem);
        //puts("###");
        prev_cnt = *cnt;
        check(&first, cnt);
        if(prev_cnt == *cnt) break;
        //puts("???");
        //printf("end:%c\n",first->elem);
    }
    

    //if(first->next == NULL) puts("aaa");

    //}

    /*while(1){
        //if(first->next == NULL) end_flag = 1;
        if(first->elem != (first->next)->elem){
            trush = pop(&first);
            trush = pop(&first);
            cnt+=2;
        }
        else{
            if(first->next->next != NULL && (first->next)->elem != (first->next->next)->elem){
                trush = pop(&(first->next));
                trush = pop(&(first->next));
                cnt+=2;
            }
            else first = first-> next;
        }
        if(first->next == NULL) break;
    }*/               
    //puts("!!");
    printf("%d\n",*cnt);

    return 0;
}

