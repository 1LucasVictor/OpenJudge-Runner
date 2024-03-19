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

/*
	節点 x を根とする部分木の中で最小のキーを持つ節点を返す
*/
Node treeMinimum (Node x ){
	while (x->left != NIL ){
		x = x->left;
	} // end while
	
	return x;
}

Node treeSearch (Node u, int k ){
	if (u == NIL || u->key == k ) return u;
	else
	if (u->key < k ){
		return treeSearch (u->right, k );
	}else{
		return treeSearch (u->left, k );
	} // end if 
}

/*
	2分探索木の節点 x に次節点がある場合はの次節点を返す
	ただし、木の中で x が最大のキーを持つ場合は NIL を返す
*/
Node treeSuccessor (Node x ){
	Node y = NIL;
	if (x->right != NIL ){
		return treeMinimum (x->right );
	} // end if
	y = x->parent;
	while (y != NIL && x == y->right ){
		x = y;
		y = y->parent;
	} // end while

	return y;
}

void treeDelete (Node z ){
	Node y;	// node to be deleted
	Node x;	// child of y

	/* 削除する節点 y を決定する */
	if (z->left == NIL || z->right == NIL ){
		y = z;				/* z が子を最大1つ持つ場合は入力節点の z */
	}else{
		y = treeSuccessor (z );	/* z が子を2つ持つ場合は z の次節点 */
	} // end if

	/* x を y の NIL ではない子または y が子を持たない場合は NIL に設定 */
	if (y->left != NIL )
		x = y->left;
	else
		x = y->right;
	
	/* y の親と x のポインタを変更し y を削除する */
	/* x が NIL または y が根のときの境界条件を処理 */
	if (x != NIL )
		x->parent = y->parent;	/* z が子を1つ持つ場合 */
	
	if (y->parent == NIL ){
		root = x;
	}else{
		if (y == (y->parent)->left){
			(y->parent)->left = x;
		}else{
			(y->parent)->right = x;
		} // end if
	} // end if

	/* z の次節点が削除されたときに y の内容を z  に移動する */
	if (y != z ){
		z->key = y->key;
	} // end if

	free(y);
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
			} // end if

			if (y != NIL ){
				y->parent = x;
			}else{
				if (x->key < k )
					x->right = z;
				else
					x->left = z;
			} // end if
			x = y;
		}while (x != NIL ); // end while
	} // end if
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
		if (com[0] == 'i' ){	// case insert 
			scanf ("%d", &x );
			insert (x );
		}else
		if (com[0] == 'p' ){ // case print
			inorder (root );
			printf ("\n" );
			preorder (root );
			printf ("\n" );
		}else
		if (com[0] == 'f' ){	// case find
			scanf ("%d", &x );
			Node t = treeSearch (root, x );
			if ( t != NIL ) printf ("yes\n" );
			else printf ("no\n" );
		}else
		if (com[0] == 'd' ){	// case delete
			scanf ("%d", &x );
			treeDelete (treeSearch (root, x ) );
		} // end if
	} // end for

	return 0;
}