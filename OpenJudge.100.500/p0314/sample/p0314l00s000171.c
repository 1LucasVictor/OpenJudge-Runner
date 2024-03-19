#include<stdio.h>

struct Node {
	//root検出用の変数
	int p;
	int left, right;
};
struct Node T[10000];

void PreParse(int i) {
	if (i == -1) {
		return;
	}
	printf(" %d", i);
	PreParse(T[i].left);
	PreParse(T[i].right);
}

void InParse(int i) {
	if (i == -1) {
		return;
	}
	InParse(T[i].left);
	printf(" %d", i);
	InParse(T[i].right);
}

void PostParse(int i) {
	if (i == -1) {
		return;
	}
	PostParse(T[i].left);
	PostParse(T[i].right);
	printf(" %d", i);
}

int main(void){
	int i, n, value, left, right, root;

	scanf("%d", &n);
	//初期化
	for (i = 0; i < n; i++) {
		T[i].p = -1;
	}

	//rootの検出
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &value, &left, &right);
		T[value].left = left;
		T[value].right = right;

		//ある点からの到着点にならないノードがroot
		if (left != -1) {
			T[left].p = 1;
		}
		if (right != -1) {
			T[right].p = 1;
		}
	}

	for (i = 0; i < n; i++) {
		//「到着点として」存在しないノードがroot
		if (T[i].p == -1) {
			root = i;
		}
	}

	printf("Preorder\n");
	PreParse(root);
	putchar('\n');
	printf("Inorder\n");
	InParse(root);
	putchar('\n');
	printf("Postorder\n");
	PostParse(root);
	putchar('\n');

	return 0;
}

