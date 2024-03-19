#include<stdio.h>
typedef struct Node *link;
struct Node{
        int key;
        link parent;
        link left;
        link right;
    };
link insert(link,link);
void find(link,int);
void inorder(link);
void preorder(link);
int main(void){
    int N,i,n,now=0,count=0;
    char word[10];
    link r = NULL;
    link L[1000];
    scanf("%d",&N);
    while(count<N){
        count++;
        scanf("%s",word);
        if(word[0] == 'p'){
            inorder(r);
            printf("\n");
            preorder(r);
            printf("\n");
            continue;
        }
        else if(word[0] == 'f'){
            scanf("%d",&n);
            find(r,n);
            continue;
        }
        else{
            scanf("%d",&n);
            L[now]  = malloc(sizeof(*L[now]));
            L[now]->key = n;
            r = insert(L[now],r);
            now++;
        }
    }
    return 0;
}
link insert(link z,link root){
    link x,p;
    p = NULL;
    x = root;
    while(x != NULL){
        p = x;
        if(z->key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }
    z->parent = p;
    if(p == NULL){
        root = z;
    }
    else if(z->key < p->key){
        p->left = z;
    }
    else{
        p->right = z;
    }
    return root;
}
void find(link root,int key){
    link x;
    int flag=0;
    x = root;
    while(x != NULL){
        if(key == x->key){
            flag = 1;
            break;
        }
        if(key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }
    if(flag==1) printf("yes\n");
    else printf("no\n");
}
void inorder(link n){
    if(n == NULL) return;
    inorder(n->left);
    printf(" %d",n->key);
    inorder(n->right);
}
void preorder(link n){
    if(n == NULL) return;
    printf(" %d",n->key);
    preorder(n->left);
    preorder(n->right);
}
