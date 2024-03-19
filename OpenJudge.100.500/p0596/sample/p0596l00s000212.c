/* ex 9_2
   nknm */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100001

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
node* push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL){
        exit(1);
    }
    new->elem = elem;
    new->next = *first;
    *first = new;
    return *first;

}


node* delete_node(node **first){
  // deletion
    node *tmp = *first;
    if(tmp == NULL){
        exit(1);
    }
    
    *first = tmp->next;
    free(tmp);
    return *first;
}


int main(void){

    char imput[SIZE];
    int i = 0, count = 0;
    scanf("%s", imput);
    //最初のノードの指す先
    node *first = NULL;
    //スタックにノードを追加
    while(imput[i] != '\0'){
        /*if(first != NULL){
            if(first->elem != imput[i]){
                delete_node(&first);
                count += 2;
            }else{
                if(imput[i] == '0'){
                    push(first, '0');
                }else if(imput[i] == '1'){
                    push(first, '1');
                }
            }
        }else{
            if(imput[i] == '0'){
                push(first, '0');
            }else if(imput[i] == '1'){
                push(first, '1');
            }
        }*/

        if(imput[i] == '0'){
            push(&first, '0');
        }else if(imput[i] == '1'){
            push(&first, '1');
        }
            
            
        
        if(first->next != NULL){
            if(first->elem == '1' && (first->next)->elem == '0'){
                delete_node(&first);
                delete_node(&first);
                count += 2;
            }else if(first->elem == '0' && (first->next)->elem == '1'){
                delete_node(&first);
                delete_node(&first);
                count += 2;
            }
        }
        i++;
    }
    printf("%d\n", count);

    return 0;
}