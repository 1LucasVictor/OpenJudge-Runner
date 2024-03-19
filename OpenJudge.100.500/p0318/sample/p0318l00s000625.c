#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
int key;
struct node *parent;
struct node *left;
struct node *right;
}node;
typedef node * NodePointer;
NodePointer root, nil;
NodePointer make(int key, NodePointer p){
NodePointer n;
n = malloc(sizeof(struct node));
n->key = key;
n->parent = p;
n->left = p;
n->right = p;
return n;
}

void insert(int key){
NodePointer n, x, z;
z = make(key, nil);
n = root;
x = nil;
while(n != nil){
x = n;
if(n->key < key) n = n->right;
else n = n->left;
}
z->parent = x;
if(x == nil) root = z;
if(x->key < z->key) x->right = z;
if(x->key > z->key) x->left = z;
}
void find(NodePointer T, int key){
if(T == nil){
printf("no\n");
return;
}
else if(T->key == key){
printf("yes\n");
return ;
}
else if(T->key < key) find(T->right, key);
else if(T->key > key) find(T->left, key);
return ;
}
NodePointer min(NodePointer x){
while(x->left != nil)
x = x->left;
return x;
}
NodePointer suc(NodePointer x){
NodePointer y;
if(x->right != nil)
return min(x->right);
y = x->parent;
while(y != nil && x == y->right){
x = y;
y = y->parent;
}
return y;
}
void delete(NodePointer T, int key){
NodePointer x, y;
while(T->key != key){
if(T->key < key) T = T->right;
else if (T->key > key) T = T->left;
}
if(T->left == nil || T->right == nil){
y = T;
}
else
y = suc(T);
if(y->left != nil) x = y->left;
else x = y->right;
if(x != nil) x->parent = y->parent;
if(y->parent == nil) root = x;
else if(y == y->parent->left) y->parent->left = x;
else y->parent->right = x;
if(y != T){
T->key = y->key;
T = y;
}

free(T);
}
void inorder(NodePointer T){
if(T->left->key != 0) inorder(T->left);
printf(" %d",T->key);
if(T->right->key != 0) inorder(T->right);
}
void preorder(NodePointer T){
printf(" %d",T->key);
if(T->left != nil) preorder(T->left);
if(T->right != nil) preorder(T->right);
}
void fre(NodePointer T){
free(T);
if(T->left != nil) fre(T->left);
if(T->right != nil) fre(T->right);
}
int main(){
int i ,n, key;
char s[20];
nil = make(0, nil);
root = make(0, nil);
root = nil;
scanf("%d",&n);
for(i = 0; i < n; i++){
scanf("%s", s);
if(s[0] == 'i'){
scanf("%d",&key);
insert(key);
}
else if(s[0] == 'd'){
scanf("%d",&key);
delete(root, key);
}
else if(s[0] == 'f'){
scanf("%d",&key);
find(root, key);
}
else if(s[0] == 'p'){
inorder(root);
printf("\n");
preorder(root);
printf("\n"); 
}
}
fre(root);
free(nil);
return 0;
}