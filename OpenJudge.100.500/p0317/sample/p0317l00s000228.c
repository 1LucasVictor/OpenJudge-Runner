#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 500015
#define NIL -1

typedef struct{ 
	int p, lc, rc, key;
}node;

node T[MAX];
int i, m, size=0, root;
char inst[8];

void insert(int z){
	int x,y;
	y = NIL; //parent of x
	x = root;
	size++;
	T[size].key = z;
		
	while (x != NIL){// || x != 0){
		y = x; //parent
		if (z < T[x].key)
			x = T[x].lc;
		else x= T[x].rc;
	}
	T[size].p = y;
	
	if (y == NIL)
		root = size;
	else if (z < T[y].key)
		T[y].lc = size;
	else T[y].rc = size;
}

int find(int x, int k){
	if (k == T[x].key)
		return 1;
	if (k < T[x].key && T[x].lc != NIL && T[x].lc != 0){
		if (find(T[x].lc, k))
			return 1;
	}
	if (k > T[x].key && T[x].rc != NIL && T[x].rc != 0) {
		if (find(T[x].rc, k))
			return 1;
	}
	return 0;
}

void preOrder(int u){
	if (u == NIL)
		return;
	printf(" %d", T[u].key);
	preOrder(T[u].lc);
	preOrder(T[u].rc);
}

void inOrder(int u){
	if (u == NIL)
		return;
	inOrder(T[u].lc);
	printf(" %d", T[u].key);
	inOrder(T[u].rc);
}


int main(void) {
	int k,f;
	root = NIL;
	scanf("%d", &m);
	//initialize
	for (i=0; i<m; i++){
		T[i].p = T[i].lc = T[i].rc = T[i].key = NIL;
	}
	
	for(i=0; i<m; i++){
		scanf("%s", &inst);
		if (inst[0] == 'i'){
			scanf("%d", &k);
			insert(k);
		}
		else if (inst[0] == 'f'){
			scanf("%d", &f);
			if(find(1, f))
				printf("yes");
			else printf("no");
			printf("\n");
		}
		else{
				inOrder(root);
				printf("\n");
				preOrder(root);
				printf("\n");
			
		}
	}

	return 0;
}

