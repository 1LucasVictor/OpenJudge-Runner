/*
 * FileName:     tree_walk
 * CreatedDate:  2020-04-22 16:25:54 +0900
 * LastModified: 2020-04-22 20:57:06 +0900
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct _node{
    int number;
    struct _node *pare;
    struct _node *left;
    struct _node *right;
}node_str;
node_str *big_pare(node_str *node){
    while(node->pare!=NULL){
        node=node->pare;
    }
    return node;
}
void print_node(node_str *parent,int order,int *list,int *i){
    if(parent==NULL){
        return;
    }
    if(order==0){
        list[*i]=parent->number;
        *i=*i+1;
        print_node(parent->left,order,list,i);
        print_node(parent->right,order,list,i);
    }
    else if(order==1){
        print_node(parent->left,order,list,i);
        list[*i]=parent->number;
        *i=*i+1;
        print_node(parent->right,order,list,i);
    }
    else{
        print_node(parent->left,order,list,i);
        print_node(parent->right,order,list,i);
        list[*i]=parent->number;
        *i=*i+1;
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    node_str *node = (node_str*) malloc(n*sizeof(node_str));
    for(int i=0;i<n;i++){
        node[i].number = i;
    }
    for(int i=0;i<n;i++){
        int id,left,right;
        scanf("%d %d %d",&id,&left,&right);
        if(left!=-1){
            node[id].left = node+left;
            node[left].pare = node+id;
        }
        if(right!=-1){
            node[id].right = node+right;
            node[right].pare = node+id;
        }
    }
    int node_list[3][n],i=0;
    int *a=&i;
    printf("Preorder\n");
    print_node(big_pare(node),0,node_list[0],a);
    printf(" %d",node_list[0][0]);
    for(int j=1;j<n;j++){
        printf(" %d",node_list[0][j]);
    }
    printf("\n");
    printf("Inorder\n");
    *a=0;
    print_node(big_pare(node),1,node_list[1],a);
    printf(" %d",node_list[1][0]);
    for(int j=1;j<n;j++){
        printf(" %d",node_list[1][j]);
    }
    printf("\n");
    printf("Postorder\n");
    *a=0;
    print_node(big_pare(node),2,node_list[2],a);
    printf(" %d",node_list[2][0]);
    for(int j=1;j<n;j++){
        printf(" %d",node_list[2][j]);
    }
    printf("\n");
    free(node);
    return 0;
}

