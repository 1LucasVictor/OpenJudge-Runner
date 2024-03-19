#include <stdio.h>

#define MAX 1000000
#define NIL -1

typedef struct Node {
	int p, l, r;
} Node;

Node T[MAX];

int n;

void preParse(int t){
	if(t == NIL) return;
	printf(" %d",t);
	preParse(T[t].l);
	preParse(T[t].r);
}

void inParse(int t){
	if(t == NIL) return;
	inParse(T[t].l);
	printf(" %d",t);
	inParse(T[t].r);
}

void postParse(int t){
	if(t == NIL) return;
	postParse(T[t].l);
	postParse(T[t].r);
	printf(" %d",t);
}


int main(void){

	int i,v,l,r,root;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		T[i].p = NIL;
	}

	for(i=0;i<n;i++){

		scanf("%d %d %d",&v,&l,&r);
		
		T[v].l = l;
		T[v].r = r;
		if(l != NIL){
			T[l].p = v;
		}
		if(r != NIL){
			T[r].p = v;	
		}
	}

	for(i=0;i<n;i++){
		if(T[i].p == NIL){
			root = i;
		}
	}

	printf("Preorder\n");
	preParse(root);
	printf("\n");
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	printf("Postorder\n");
	postParse(root);
	printf("\n");

	return 0;
}









