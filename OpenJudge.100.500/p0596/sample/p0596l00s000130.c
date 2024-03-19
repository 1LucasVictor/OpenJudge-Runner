/*  ex9_2
    B30095    */
#include <stdio.h>
#include <stdlib.h>

// node definition
typedef struct node{
    char elem;
    struct node *next;
} node;

int is_stack_empty(node ** first);
void push(node **first, char elem);
char pop(node **first);

int main(void){
    node * first = NULL;
    char newColor, topColor; 
    int cnt = 0;

    while(1){
        newColor = getchar();
        if(newColor == '\n' || newColor == EOF || newColor == '\0') break;  /// end loop if the end of input is reached


        // push new cube to the stack if its color is the same as the top cube's or the stack is empty
        if(newColor == topColor || is_stack_empty(&first)){
            push(&first, newColor);
        }
        // remove the top cube if its color is not the same as new cube's
        else{
            pop(&first);
            cnt += 2;
        }

        // renew top cube's color
        if(!is_stack_empty(&first)){
            topColor = pop(&first);
            push(&first, topColor);  // put the element back
        }
    }
    
    // print result
    printf("%d", cnt);

    return 0;
}

int is_stack_empty(node ** first){
    if(*first == NULL) return 1;
    else return 0;
}

// stack push operation
void push(node **first, char elem){
    node *new = calloc(1, sizeof(node));  // allocate memory for new node
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}


// stack pop operation
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);  // deallocate memory of unused node
    return elem;
}
