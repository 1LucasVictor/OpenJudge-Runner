#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct treetype {
	int parent;
	int sibling;
	int left;
	int right;
};

int main(void) {
	int n;
	struct treetype tree[26];
	int i, j, k;
	int lr = 0;
	int number;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		tree[i].parent = -2;
		tree[i].sibling = -2;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &number);
		scanf("%d %d", &tree[number].left, &tree[number].right);

		tree[tree[number].left].parent = number; //親決定
		tree[tree[number].left].sibling = tree[number].right;
		tree[tree[number].right].parent = number;
		tree[tree[number].right].sibling = tree[number].left;
	}

	printf("Preorder\n");

	for (i = 0; 1; i++) {
		if (tree[i].parent ==  -2) {
			number = i;
			break;
		}
	}

	for (i = 0; i < n; i++) {
		printf(" %d", number);
		if (tree[number].left >= 0) {
			number = tree[number].left;
			lr = 0;
		}
		else if (tree[number].right >= 0) {
			number = tree[number].right;
			lr = 1;
		}
		else if (tree[number].sibling >= 0 && lr == 0) {
			number = tree[number].sibling;
			lr = 1;
		}
		else {
			k = tree[number].parent;
			while (1) {
				if (tree[k].sibling >= 0) {
					number = tree[k].sibling; //ここ繰り返しに使用
					break;
				}
				k = tree[k].parent;
			}
		}
	}

	printf("\nInorder\n");

	lr = 0;
	for (i = 0; 1; i++) {
		if (tree[i].parent == -2) {
			number = i;
			break;
		}
	}
	for (i = 0; 1; i++) {
		if (tree[number].left < 0) {
			break;
		}
		number = tree[number].left;
	}

	for (i = 0; i < n; i++) {
		printf(" %d", number);

		if (tree[number].right >= 0) {
			number = tree[number].right;
			lr = 1;
			while (1) {
				if (tree[number].left < 0) {
					break;
				}
				number = tree[number].left;
				lr = 0;
			}
		}else if (tree[number].parent >= 0) {
			number = tree[number].parent;
			if (lr == 1) {
				number = tree[number].parent;
				lr = 0;
			}
		}
	}

	printf("\nPostorder\n");


	lr = 0;
	for (i = 0; 1; i++) {
		if (tree[i].parent == -2) {
			number = i;
			break;
		}
	}
	for (i = 0; 1; i++) {
		if (tree[number].left < 0) {
			if (tree[number].right < 0) {
				break;
			}
			else {
				number = tree[number].right;
			}
		}
		else {
			number = tree[number].left;
		}
	}

	for (i = 0; i < n; i++) {
		printf(" %d", number);

		if (tree[number].sibling >= 0 && lr == 0) {
			number = tree[number].sibling;
			lr = 1;
			while (1) {
				if (tree[number].left < 0) {
					if (tree[number].right < 0) {
						break;
					}
					else {
						number = tree[number].right;
						lr = 1;
					}
				}
				else {
					number = tree[number].left;
					lr = 0;
				}
			}
		}
		else if (tree[number].parent >= 0) {
			number = tree[number].parent;
			if (number == tree[tree[number].parent].left) {
				lr = 0;
			}
			else {
				lr = 1;
			}

		}

	}

	printf("\n");

	return 0;
}
