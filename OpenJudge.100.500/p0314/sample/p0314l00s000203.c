#include<stdio.h>
#define MAX 10000

struct Node{
	int parent;
	int left;
	int right;
};

struct Node T[MAX];
int n;


void preParse(int u){
	if( u==-1 ){ return; }
	printf(" %d", u);
	preParse(T[u].left);
	preParse(T[u].right);
}

void inParse(int u){
	if( u==-1 ){ return; }
	inParse(T[u].left);
	printf(" %d", u);
	inParse(T[u].right);
}

void postParse(int u){
	if( u==-1 ){ return; }
	postParse(T[u].left);
	postParse(T[u].right);
	printf(" %d", u);
}

int main(void){
	int i, num, left, right, root;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		T[i].parent = -1;
	}
	
	for(i=0; i<n; i++){
		scanf("%d %d %d", &num, &left, &right);
		T[num].left = left;
		T[num].right = right;
		if( left != -1 ){ T[left].parent = num; }
		if( right != -1 ){ T[ right].parent = num; }
	}
	
	for(i=0; i<n; i++){
		if( T[i].parent == -1 ){ root = i; }
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

