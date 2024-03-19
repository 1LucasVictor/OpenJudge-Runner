/* ex8_2 
melo */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000001
typedef struct node{
    char elem;
    struct node *next;
} node;
void push(node **first,char elem);
char pop(node **first);

int main(void){
    int i,count=0;
    char color[SIZE];
    node *first=NULL;
    scanf("%s",color);
    for(i=0;i<strlen(color);i++){
        if(i==0||i=='\t'){
            push(&first,color[i]);
        }
        else if(color[i]==first->elem){
            push(&first,color[i]);
        }
        else{
            pop(&first);
            count+=2;
            push(&first,'\t');
        }
    }
    printf("%d\n",count);
    return 0;
}

void push(node **first,char elem){
    node *new =calloc(1,sizeof(node));
    if(new==NULL)exit(1);
    new->elem=elem; 
    new->next=*first;
    *first=new;
}
char pop(node **first){
    char elem;
    node *tmp =*first;
    if(tmp==NULL)exit(1);
    elem=tmp->elem;
    *first=tmp->next;
    free(tmp);
    return elem;
}