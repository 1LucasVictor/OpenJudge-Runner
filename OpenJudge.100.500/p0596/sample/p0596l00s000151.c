/*
 * ex 9-2
 * kamecha
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE (100000+10)

//スタックを単方向リストで実装
typedef struct node{
    char elem;
    struct node *next;
}node;

void push(node **first, char elem){
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}

//stackの一番上の値を取得
char top(node **first){
    if(*first == NULL)   exit(1);
    return (*first)->elem;
}

//debug用print関数
void debug_print(node **first){
    node *ptr = *first;
    while(ptr != NULL){
        printf("|%c| => ", ptr->elem);
        ptr = ptr->next;
    }
    puts("NULL");
}

int main(void){
    node *first = NULL;
    char str[SIZE];
    int ans = 0;
    scanf("%s", str);
    //下から順に取り除いていく
    for(int i = 0; str[i] != '\0'; i++){
        if(first == NULL){
            push(&first, str[i]);
        }else if(top(&first) == str[i]){
            push(&first, str[i]);
        }else{
            pop(&first);
            ans += 2;
        }
    }
    printf("%d\n", ans);
    return 0;
}
