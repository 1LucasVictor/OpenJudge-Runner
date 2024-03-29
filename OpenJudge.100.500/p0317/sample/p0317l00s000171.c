#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *right;
	struct node *left;
	struct node *parent;
	int key;
};

typedef struct node * Node;
#define NIL NULL

Node root;

Node treeSearch (Node u, int k ){
	if (u == NIL || u->key == k ) return u;
	else
	if (u->key < k ){
		return treeSearch (u->right, k );
	}else{
		return treeSearch (u->left, k );
	} 
}

void treeDelete (Node z ){
	Node y;
	Node x;
}

void insert (int k ){
	Node y = NIL;
	Node x = root;
	Node z;

	z = malloc (sizeof (struct node ) );
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	if (x == NIL ){
		root = z;
	}else{
		do{
			if (x->key < k ){
				y = x->right;
			}else{
				y = x->left;
			}

			if (y != NIL ){
				y->parent = x;
			}else{
				if (x->key < k )
					x->right = z;
				else
					x->left = z;
			}
			x = y;
		}while (x != NIL );
	}
}

void inorder (Node u ){
	if (u == NIL ) return;
	inorder (u->left );
	printf (" %d", u->key );
	inorder (u->right );
}

void preorder (Node u ){
	if (u == NIL ) return;
	printf (" %d", u->key );
	preorder (u->left );
	preorder (u->right );
}

int main()
{
	int n, i, x;
	char com[20];

	root = NIL;
	scanf ("%d", &n );
	for (i = 0; i < n; i++ ){
		scanf ("%s", com );
		if (com[0] == 'i' ){
			scanf ("%d", &x );
			insert (x );
		}else
		if (com[0] == 'p' ){
			inorder (root );
			printf ("\n" );
			preorder (root );
			printf ("\n" );
		}else
		if (com[0] == 'f' ){
			scanf ("%d", &x );
			Node t = treeSearch (root, x );
			if ( t != NIL ) printf ("yes\n" );
			else printf ("no\n" );
		}
	}
	return 0;
}

