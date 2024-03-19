/*  ex9_2 Stack Cubes
    pandacodeb  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100000

typedef struct node{
    char color;
    struct node *next;
}node;

void push(node **first, char color){
    node *new = calloc(1, sizeof(node));
    if (new == NULL)
        exit(1);
    new->color = color;
    new->next = *first;
    *first = new;
}

char pop(node **first){
    char color;
    node *tmp = *first;
    if (tmp == NULL)
        exit(1);
    color = tmp->color;
    *first = tmp->next;
    free(tmp);
    return color;
}

// void print_s(node **first){
//     node *tmp = *first;
//     while (tmp != NULL){
//         printf("%c", tmp->color);
//         tmp = tmp->next;
//     }
//     printf("\n");
// }

// int main(void){
//     int i;
//     char color, del;

//     //scanf("%d", &10);
//     node *first = NULL;
//     for (i = 0; i < 10; i++){
//         scanf(" %c", &color);
//         if (color == '0' || color == '1')
//             push(&first, color);
//         else
//             del = pop(&first);
//         print_s(&first);
//     }
//     return 0;
// }

int main(void){
    char *cubes, top;
    int count = 0;
    cubes = (char*) malloc(sizeof(char)*SIZE);
    scanf("%s", cubes);

    node *first = NULL;
    push(&first, cubes[0]);
    for (int i = 1; i < strlen(cubes); i++){
        if (first == NULL)
            push(&first, cubes[i]);
        else{
            top = pop(&first);
            if (top == cubes[i]){
                push(&first, top);
                push(&first, cubes[i]);
            }
            else
                count+=2;
        }
    }

    printf("%d\n", count);
    return 0;
}