#include <stdio.h>
#include <stdlib.h>

typedef struct P{
    int num;
    int left;
    int right;
}Node;

void pre(Node node[],int n){
    if(n==-1){return;}
    printf(" %d",node[n].num);
    pre(node,node[n].left);
    pre(node,node[n].right);
}

void ino(Node node[],int n){
    if(n==-1){return;}
    ino(node,node[n].left);
    printf(" %d",node[n].num);
    ino(node,node[n].right);
}

int insert(Node node[],int n,int x,int num){
    int ii=0;
    if(n==-1||node[n].num==-1){
        node[x].num = num;
        return x;
    }else if(node[n].num>num){
        ii = insert(node,node[n].left,x,num);
        if(ii!=0){
            node[n].left = ii;
        }
    }else{
        ii = insert(node,node[n].right,x,num);
        if(ii!=0){
            node[n].right = ii;
        }
    }
    return 0;
}

int find(Node node[],int n,int num){
    if(n==-1){return 0;}
    else if(node[n].num>num){return find(node,node[n].left,num);}
    else if(node[n].num<num){return find(node,node[n].right,num);}
    else{return 1;}
}

int main(void){
    int n,i,j,x,y;
    char str[7];
    Node *node;
    scanf("%d",&n);
    node = (Node*)malloc(sizeof(Node)*n);
    for(i=0;i<n;i++){
        node[i].num = -1;
        node[i].left = -1;
        node[i].right = -1;
    }
    x = 0;
    for(i=0;i<n;i++){
        scanf("%s",str);
        if(str[0]=='i'){
            scanf("%d",&y);
            insert(node,0,x,y);
            x++;
        }else if(str[0]=='f'){
            scanf("%d",&y);
            y = find(node,0,y);
            if(y==1){printf("yes\n");}
            else{printf("no\n");}
        }else{
            ino(node,0);
            printf("\n");
            pre(node,0);
            printf("\n");
        }
    }
    return 0;
}
