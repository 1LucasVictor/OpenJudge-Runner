#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct Node{
	int key;
	struct Node *l, *r, *p;
};

struct Node *root, *NIL;

void insert(int v){
struct Node *y = NIL;
struct Node *x = root;
struct Node *z;

z = (struct Node *)malloc(sizeof(struct Node));
z->key = v;
z->l = NIL;
z->r = NIL;

while(x != NIL){
y = x;
if( z->key < x->key ){
	x = x->l;
	}
else{
x = x->r;
	}
}
z->p = y;
if(y == NIL){
	root = z;
}
else if(z->key < y->key){
	y->l =z;
}
else{
	y->r =z;
}
}

void Iorder(struct Node *u){
	if(u == NIL){
		return;
	}
	Iorder(u->l);
	printf(" %d", u->key);
	Iorder(u->r);
}
void Porder(struct Node *u){
	if(u == NIL){
		return;
	}
	printf(" %d", u->key);
	Porder(u->l);
	Porder(u->r);
}
int main(){
	int n,i,v;
	char *sent = malloc(7);
char *s1 = "insert";
char *s2 = "print";

	scanf("%d",&n);

	for(i = 0;i <n;i++){

		scanf("%6s",sent);
   
		if(0==strcmp(sent,s1)){
			scanf("%d", &v);
			insert(v);
		}
		else if(0==strcmp(sent,s2)){
			Iorder(root);
			printf("\n");
			Porder(root);
			printf("\n");
		}
	}

return 0;
}