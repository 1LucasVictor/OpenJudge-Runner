// AOJ ALDS1_8_B Binary Search Tree II
// 2018.5.1 bal4u

#include <stdio.h>

#if 1
#define gc() getchar_unlocked()
#define pc(c) putchar_unlocked(c)
#else
#define gc() getchar()
#define pc(c) putchar(c)
#endif

int in()
{
	int n = 0, c = gc();
	if (c == '-') { c = gc();
		do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
		return -n;
	}
	do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
	return n;
}

void skip(int k) { while (k--) gc(); }

void out(int n)
{
	int i;
	char ob[20];

	if (!n) { pc('0'); return; }
	if (n < 0) pc('-'), n = -n;
	i = 0; while (n) ob[i++] = n%10 + '0', n/=10;
	while (i--) pc(ob[i]); 
}

void sout(char *s) { while (*s) pc(*s++); }

typedef struct { int key; int parent; int left, right; } BT;
BT bt[500005]; int sz;
int root;

void preorder(int node)
{
	pc(' '), out(bt[node].key);
	if (bt[node].left  > 0) preorder(bt[node].left);
	if (bt[node].right > 0) preorder(bt[node].right);
}

void inorder(int node)
{
	if (bt[node].left  > 0) inorder(bt[node].left);
	pc(' '), out(bt[node].key);
	if (bt[node].right > 0) inorder(bt[node].right);
}

void insert(int z)
{
	int x, y;

	y = 0, x = root;
	while (x) {
		y = x;
		if (bt[z].key < bt[x].key) x = bt[x].left;
		else                       x = bt[x].right;
	}
	bt[z].parent = y;

	if (!y) root = z;
	else if (bt[z].key < bt[y].key) bt[y].left  = z;
	else                            bt[y].right = z;
}

int find(int node, int key)
{
	int t;

	t = key - bt[node].key;
	if (!t) return 1;
	if (t < 0) {
		if (bt[node].left > 0) return find(bt[node].left, key);
	} else {
		if (bt[node].right > 0) return find(bt[node].right, key);
	}
	return 0;
}

int main()
{
	int n, i;
	char op;

	n = in(), root = 0, sz = 1;
	for (i = 0; i < n; i++) {
		op = gc();
		if (op == 'p') {            // print
			skip(5);
			inorder(root), pc('\n');
			preorder(root), pc('\n');
		} else if (op == 'i') {     // insert
			skip(6);
			bt[sz].key = in();
			insert(sz++);
		} else {                    // find
			skip(4);
			sout(find(root, in())? "yes": "no"), pc('\n');
		}
	}
	return 0;
}
