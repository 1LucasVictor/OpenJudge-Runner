/*  ex9_2
    shu_t */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char elem;
    struct node *next;
} node;

//add data to stack
void push(node **first, char elem){
    //make memory
    node *new = calloc(1, sizeof(node));
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//pop data from stack
void pop(node **first){
    node *tmp = *first;
    if(tmp == NULL){
        exit(1);
    }
    *first = tmp->next;
    //free memory
    free(tmp);
}

int main(void){
    char color[100001];//for input
    int ans = 0;//answer
    int i=0;//roop variable
    //first node
    node *first = NULL;
    //input string
    scanf("%s",color);
    
    for(i=0;i<strlen(color);i++){
        //add to stack
        push(&first, color[i]);
        //more than two cube and its color is different
        if((first->next != NULL) && (first->elem != first->next->elem)){
        //pop two data and count + 2
            pop(&first);
            pop(&first);
            ans += 2;
        }
    }
    //output the answer
    printf("%d\n",ans);
    return 0;
}