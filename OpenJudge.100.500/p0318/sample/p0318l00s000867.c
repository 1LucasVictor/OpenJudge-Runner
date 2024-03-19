#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Node{
    int key;
    struct _Node *right;
    struct _Node *left;
    struct _Node *parent;
} Node;
Node* getMinimum(Node []);
Node* find(Node [],int);
Node* getSuccessor(Node []);
void deleteNode(Node []);
void insert(int);
void inorder(Node []);
void preorder(Node []);

Node *root,*NIL;

int main(){
    int n,i,x;
    char std[10];
    Node *tmp;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",std);
        if(std[0] == 'f'){
            scanf("%d",&x);
            tmp = find(root,x);
            if(tmp != NIL) printf("yes\n");
            else printf("no\n");
        }
        else if(strcmp(std,"insert")==0){
            scanf("%d",&x);
            insert(x);
        }
        else if(strcmp(std,"print")==0){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else if(strcmp(std,"delete")==0){
            scanf("%d",&x);
            deleteNode(find(root,x));
        }
    }

    return 0;
}

Node* getMinimum(Node *x){
    while(x->left != NIL){
        x = x->left;
    }
    return x;
}

Node * find(Node *u,int k){
    while(u != NIL && k != u->key){
        if(k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

Node * getSuccessor(Node *x){
    Node *y;

    if(x->right != NIL){
        return getMinimum(x->right);
    }
    y = x->parent;
    while(y != NIL && x == y->right){
        x = y;
        y = y->parent;
    }
    return y;
}

void deleteNode(Node *z){
    Node *y;
    Node *x;

    if(z->left == NIL || z->right == NIL){
        y = z;
    }
    else{
        y = getSuccessor(z);
    }

    if(y->left != NIL){
        x = y->left;
    }
    else{
        x = y->right;
    }

    if(x != NIL){
        x->parent = y->parent;
    }

    if(y->parent == NIL){
        root = x;
    }
    else{
        if(y == y->parent->left){
            y->parent->left = x;
        }
        else{
            y->parent->right = x;
        }
    }

    if(y != z){
        z->key = y->key;
    }

    free(y);
}

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z -> key = k;
    z -> left = NIL;
    z -> right = NIL;

    while(x != NIL){
        y = x;
        if(z -> key < x -> key){
            x = x -> left;
        }else{
            x = x -> right;
        }
    }
    z -> parent = y;
    if(y ==NIL){
        root = z;
    }else{
        if(z -> key < y -> key){
            y -> left = z;
        }else{
            y -> right = z;
        }
    }
}

void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(Node *u){
    if(u == NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}
