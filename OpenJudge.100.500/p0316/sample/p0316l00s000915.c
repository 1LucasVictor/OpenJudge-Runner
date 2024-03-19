#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{
	int key;
	struct Node *p,*l,*r;
}Node;

Node *root,*nil;

int pre(Node *t){
	if(t == nil)return 0;
	printf(" %d",t->key);
	pre(t->l);
	pre(t->r);
}

int in(Node *t){
	if(t == nil)return 0;
	in(t->l);
	printf(" %d",t->key);
	in(t->r);
}

void insert(int key){
	Node *y = nil;
	Node *x = root;
	Node *z;
	
    z = (Node *)malloc(sizeof(Node));
	z->key = key;
	z->l = nil;
	z->r = nil;
	while(x != nil){
		y = x;
		if(z->key < x->key){
			x=x->l;
		}else{
			x=x->r;
		}
	}
	z->p = y;
	if(y == nil){
		root = z;
	}else if(z->key < y->key){
		y->l = z;
	}else{
		y->r = z;
	}
}

int main(void) {
	int n;
	char com[16];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++) {
        scanf("%s",com);
        if(!strcmp(com,"insert")) {
        	int x;
            scanf("%d",&x);
            insert(x);
        } else if(!strcmp(com,"print")) {
            in(root);
            printf("\n");
            pre(root);
            printf("\n");
        }
    }
	return 0;
}
