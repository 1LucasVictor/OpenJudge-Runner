#include <stdio.h>
#define N 500000

typedef struct Node_tbl{
	int key;
	int parent;
	int left;
	int right;
} Node;

const int nil = -1;
Node t[N];
int root;
int room;
int ix;

int tmin(int u){

  while (t[u].left != nil)
		u = t[u].left;

	return u;
}

int find(int u, int k){
	while (u != nil && k != t[u].key){
		if (k < t[u].key)
			u = t[u].left;
		else
			u = t[u].right;
	}

	return u;
}

int trees(int u){
	if (t[u].right != nil){
		return tmin(t[u].right);
  }

	int y = t[u].parent;
	while (y != nil && u == t[y].right){
		u = y;
		y = t[y].parent;
	}

	return y;
}

void delete(int z){
	int y;
	int x;

	if (t[z].left == nil || t[z].right == nil){
		y = z;
  }
	else{
		y = trees(z);
  }

	if (t[y].left != nil)	x = t[y].left;
	else{
		x = t[y].right;
  }

	if (x != nil) t[x].parent = t[y].parent;

	if (t[y].parent == nil) root = x;
	else{
		if (y == t[t[y].parent].left){
			t[t[y].parent].left = x;
    }
		else{
			t[t[y].parent].right = x;
    }
	}

	if (y != z)
		t[z].key = t[y].key;

	t[y].right = room;
	room = y;
}

void insert(int k){
	int z;
	int y = nil;
	int x = root;

	if (room == nil) z = ix++;
	else{
		z = room;
		room = t[room].right;
	}

	t[z].key = k;
	t[z].left = nil;
	t[z].right = nil;

	while (x != nil){
		y = x;
		if (t[z].key < t[x].key)
			x = t[x].left;
		else
			x = t[x].right;
	}

	t[z].parent = y;
	if (y == nil)
		root = z;

	else{
		if (t[z].key < t[y].key)
			t[y].left = z;
		else
			t[y].right = z;
	}
}

void
inorder(int u)
{
	if (u == nil)
		return;

	inorder(t[u].left);
	printf(" %d", t[u].key);
	inorder(t[u].right);
}

void preorder(int u){
	if (u == nil) return;

	printf(" %d", t[u].key);

	preorder(t[u].left);
	preorder(t[u].right);
}

int main(int argc, char** argv){
	char com[8];
	int n;
	int x;
	int i;

	root = nil;
	room = -1;
	ix = 0;

	scanf("%d", &n);

	for (i = 0; i < n; ++i){
		scanf("%s", com);

		switch (com[0]){
		case 'd':
			scanf("%d", &x);
			delete(find(root, x));
			break;

		case 'f':
			scanf("%d", &x);
			printf("%s\n", find(root, x) != nil ? "yes" : "no");
			break;

		case 'i':
			scanf("%d", &x);
			insert(x);
			break;

		case 'p':
		default:
			inorder(root);
			printf("\n");

			preorder(root);
			printf("\n");
			break;
		}
	}

  return 0;
}

