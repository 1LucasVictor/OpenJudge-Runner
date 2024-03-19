#include<stdio.h>
#define NIL -1
#define MAX 500000
int root = NIL;
int key[MAX];
int left[MAX];
int right[MAX];
//int T[MAX];
int p[MAX];
void insert(int z) {
	int y = NIL;
	int x = root;
	while (x != NIL) {
		y = x;
		if (key[z] < key[x])x = left[x];
		else x = right[x];
	}
	p[z] = y;
	if (y == NIL) {
		root = z;
	}
	else if (key[z] < key[y]) {
		left[y] = z;
	}else right[y] = z;

}
void pre(int t) {
	if (t == NIL) {
		return;
	}
	printf(" %d", key[t]);
	pre(left[t]);
	pre(right[t]);
}

void ino(int t) {
	if (t == NIL) {
		return;
	}
	ino(left[t]);
	printf(" %d", key[t]);
	ino(right[t]);
}

void print() {
	ino(root);
	printf("\n");
	pre(root);
	printf("\n");
}

int find(int t) {
	int i = 0;
	int y = NIL;
	int x = root;
	while (x != NIL) {
		if (key[x] == t) {
			return 1;
		}
		y = x;
		if (t < key[x]) {
			x = left[x];
		}else x = right[x];
	}
	return 0;
}

int main() {

	int i, nu, x;
	int y = 0;
	char AP[10];
	scanf("%d", &nu);
	for (i = 0; i < MAX; i++) {
		key[i] = NIL;
		left[i] = NIL;
		right[i] = NIL;
		//   T[MAX]=NIL;
		p[i] = NIL;
	}
	for (i = 0; i < nu; i++) {
		scanf("%s", AP);
		if (AP[0] == 'i') {
			scanf("%d", &x);
			key[y] = x;
			insert(y);
			y++;
		}
		else if (AP[0] == 'p') {
			print();
		}else if (AP[0] == 'f') {
			scanf("%d", &x);
			if (find(x) == 1) {
				printf("yes\n");
			}else printf("no\n");
		}
	}

	return 0;
}
