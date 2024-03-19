#include <stdio.h>

struct node_t {
	int id;
	int parent;
	int childs[2];
};
typedef struct node_t Node;

void preorder_walk(Node *data, int index, int out[25], int *ptr) {
	Node *p;

	p = &data[index];
	out[(*ptr)++] = p->id;
	if (p->childs[0] >= 0) {
		preorder_walk(data, p->childs[0], out, ptr);
	}
	if (p->childs[1] >= 0) {
		preorder_walk(data, p->childs[1], out, ptr);
	}
}

void inorder_walk(Node *data, int index, int out[25], int *ptr) {
	Node *p;

	p = &data[index];
	if (p->childs[0] >= 0) {
		inorder_walk(data, p->childs[0], out, ptr);
	}
	out[(*ptr)++] = p->id;
	if (p->childs[1] >= 0) {
		inorder_walk(data, p->childs[1], out, ptr);
	}
}

void postorder_wark(Node *data, int index, int out[25], int *ptr) {
	Node *p;

	p = &data[index];
	if (p->childs[0] >= 0) {
		postorder_wark(data, p->childs[0], out, ptr);
	}
	if (p->childs[1] >= 0) {
		postorder_wark(data, p->childs[1], out, ptr);
	}
	out[(*ptr)++] = p->id;
}


int main(void) {
	Node data[25], *p;
	int n, id, left, right, start, out[25], i;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		data[i].parent = -1;
	}
	for (i = 0; i < n; i++) {
		scanf("%d %d %d ", &id, &left, &right);
		p = &data[id];
		p->id = id;
		p->childs[0] = left;
		p->childs[1] = right;
		if (left >= 0) {
			data[left].parent = id;
		}
		if (right >= 0) {
			data[right].parent = id;
		}
	}

	for (i = 0; i < n; i++) {
		if (data[i].parent == -1) {
			start = data[i].id;
			break;
		}
	}

	puts("Preorder");
	i = 0;
	preorder_walk(data, start, out, &i);
	for (i = 0; i < n; i++) {
		printf(" %d", out[i]);
	}
	puts("\nInorder");
	i = 0;
	inorder_walk(data, start, out, &i);
	for (i = 0; i < n; i++) {
		printf(" %d", out[i]);
	}
	puts("\nPostorder");
	i = 0;
	postorder_wark(data, start, out, &i);
	for (i = 0; i < n; i++) {
		printf(" %d", out[i]);
	}
	putchar('\n');
	return 0;
}