#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct tree_t{
	int key;
	struct tree_t *left;
	struct tree_t *right;
}TREE_T;

TREE_T *TREE;


TREE_T *Find(int key)
{
	TREE_T *y = NULL;
	TREE_T *x = TREE;


	while(x != NULL){
		if(key == x->key)
			return x;
		y = x;
		if(key < x->key)
			x = x->left;
		else
			x = x->right;
	}

	return NULL;
}


int Insert(int key)
{
	TREE_T *p;
	TREE_T *y = NULL;
	TREE_T *x = TREE;


	if( (p = (TREE_T *)malloc(sizeof(TREE_T))) == NULL){
		printf("malloc error\n");
		return 0;
	}
	p->key = key;
	p->left = NULL;
	p->right = NULL;

	while(x != NULL){
		y = x;
		if(p->key < x->key)
			x = x->left;
		else
			x = x->right;
	}

	if(y == NULL)
		TREE = p;
	else if(p->key < y->key)
		y->left = p;
	else
		y->right = p;

	return 1;
}


// kind = 0:通りがけ 1:行きがけ
void Walk_tree(TREE_T *p, int kind)
{
	if(kind == 1)
		printf(" %d", p->key);

	if(p->left != NULL)
		Walk_tree(p->left, kind);

	if(kind == 0)
		printf(" %d", p->key);

	if(p->right !=NULL)
		Walk_tree(p->right, kind);
}


int main()
{
	TREE_T *p;
	int n;
	char command[10];
	int key;
	int i;

	TREE = NULL;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s", command);

		if(!strcmp(command, "insert")){
			scanf("%d", &key);
			Insert(key);
		}else if(!strcmp(command, "print")){
			Walk_tree(TREE, 0);
			printf("\n");
			Walk_tree(TREE, 1);
			printf("\n");
		}else if(!strcmp(command, "find")){
			scanf("%d", &key);
			if(Find(key))
				printf("yes\n");
			else
				printf("no\n");
		}
	}


	return 0;
}
