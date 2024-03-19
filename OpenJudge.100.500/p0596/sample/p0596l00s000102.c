/*  ex9_2
    Y_Aizaki  */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 12000

typedef struct node
{
    char elem;
    struct node *next;
}node;

void push(node **firs, char elem);
char pop(node **first);

int main(void){
    node cube;
    node *cube_p = &cube;
    node **cube_pp = &cube_p;
    cube_p->next = NULL;

    char input[SIZE];
    char *point_input = input;

    int answer = 0;

    node popped_cube;
    node *popped_cube_p = &popped_cube;
    node **popped_cube_pp = &popped_cube_p;
    popped_cube_p->next = NULL;

    int num = 0;

    char tmp1, tmp2;

    scanf("%[10]", input);

    while (*point_input){
        push(cube_pp, *point_input++);
        num++;
    }

    
    while (cube_p->next){
        if (num < 2){
            break;
        }
        if (popped_cube_p->next){
            tmp1 = pop(cube_pp);
            tmp2 = pop(popped_cube_pp);

            if (tmp1 != tmp2){
                answer += 2;
            }
            else{
                push(popped_cube_pp, tmp2);
                push(popped_cube_pp, tmp1);
            }
        }
        else{
            tmp1 = pop(cube_pp);
            tmp2 = pop(cube_pp);
            if (tmp1 != tmp2){
                answer += 2;
            }
            else{
                push(popped_cube_pp, tmp1);
                push(cube_pp, tmp2);
            }
        }
    }

    
    
    printf("%d\n", answer);

    return 0;
}



void push(node **first, char elem){
    node *new = calloc(1, sizeof(node));
    if (new == NULL){
        exit(1);
    }
    new->elem = elem;
    new->next = *first;
    *first = new;
}

char pop(node **first){
    char elem;
    node *tmp = *first;
    if (tmp == NULL){
        exit(1);
    }
    elem = tmp->elem;
    *first = tmp->next;

    free(tmp);
    return elem;
}