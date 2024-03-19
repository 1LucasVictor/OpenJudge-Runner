#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {
	int key;
	struct node *r,*l,*p;
};
struct node *NIL,*root;
int a=0,b=0;
void insert(int k) {
	struct node *x=root,*y=NIL,*z;
	z=(struct node*)malloc(sizeof(struct node));
	z->key=k;
	z->l=NIL;
	z->r=NIL;
	while(x!=NIL) {
		y=x;
		if(k<x->key)
			x=x->l;
		else
			x=x->r;
	}
	z->p=y;
	if(y==NIL) {
		root=z;
	} else if(z->key<y->key)
		y->l=z;
	else
		y->r=z;
}
void inOrder(struct node *p) {
	if(p==NIL)
	return;
	inOrder(p->l);
    printf(" %d",p->key);
	inOrder(p->r);
}
void preOrder(struct node *p) {
	if(p==NIL)
	return;
	printf(" %d",p->key);
	preOrder(p->l);
	preOrder(p->r);
}
int getit(struct node *p) {
	a=0;
	b=0;
	inOrder(p);
	printf("\n");
	preOrder(p);
	printf("\n");
	return a;
}
int main() {
	int m,i,j,o=0,k;
	char str[10];
	int len[11];
	scanf("%d",&m);
	for(i=0; i<m; i++) {
		scanf("%s",str);
		if(str[0]=='i') {
			scanf("%d",&k);
			insert(k);
		} else {
			getit(root);
		}
	}//输入
	return 0;
}
