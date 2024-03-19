/*
 * FileName:     binary_tree_1
 * CreatedDate:  2020-04-22 21:32:11 +0900
 * LastModified: 2020-04-23 00:47:13 +0900
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define node_max 500000
typedef struct _node{
    int number;
    struct _node *pare;
    struct _node *left;
    struct _node *right;
}_node;
void insert_node(_node *pare, _node *new){
    if(pare==NULL){
        return;
    }
    if(pare->left==NULL&&pare->number>new->number){
        pare->left=new;
        new->pare=pare;
    }
    else if(pare->left!=NULL&&pare->number>new->number){
        insert_node(pare->left,new);
    }
    else if(pare->right==NULL&&pare->number<new->number){
        pare->right=new;
        new->pare=pare;
    }
    else{
        insert_node(pare->right,new);
    }
}
void print_node(_node *pare,int order){
    if(pare==NULL){
        return ;
    }
    if(order==0){
        printf(" %d",pare->number);
        print_node(pare->left,order);
        print_node(pare->right,order);
    }
    else{
        print_node(pare->left,order);
        printf(" %d",pare->number);
        print_node(pare->right,order);
    }
}
int main(void){
    int n,count=0;
    scanf("%d",&n);
    _node *nn = (_node*)malloc(sizeof(_node));
    nn->left=NULL;
    nn->right=NULL;
    nn->pare=NULL;
    char tmp[7];
    scanf("%s %d",tmp,&nn->number);
    _node *pare = nn;
    _node *node = (_node*)malloc(n*sizeof(_node));
    for(int i=1;i<n;i++){
        char *command = (char*)malloc(7*sizeof(char));
        scanf("%s",command);
        if(strcmp(command,"insert")==0){
            scanf("%d",&(node+count)->number);
            insert_node(pare,node+count);
            count++;
            pare=nn;
        }
        else{
            print_node(pare,1);
            printf("\n");
            print_node(pare,0);
            printf("\n");
        }
        free(command);
    }
    free(nn);
    free(node);
    return 0;
}

