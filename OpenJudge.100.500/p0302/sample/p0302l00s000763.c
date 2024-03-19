#include <stdio.h>
#include <stdlib.h>
#define NODE_NUM 100000
struct node_t {
	int key;
	struct node_t *next;
};
typedef struct node_t Node;

Node *insert_value(Node *node, int value) {
	Node *p;

	p = malloc(sizeof(Node));
	p->key = value;
	p->next = node;
	return p;
}

int find_value(Node *node, int value) {
	Node *p;

	for (p = node; p != NULL; p = p->next) {
		if (p->key == value)
			return 1;
	}
	return 0;
}

int get_key(char str[15]) {
	static int code['T'+1] = {['A']=1, ['C']=2, ['G']=3, ['T']=4};
	int i, s = 0, p = 1;

	for (i = 0; str[i] != '\0'; i++) {
		s += p * code[(int)str[i]];
		p *= 5;
	}
	return s;
}

int main(void) {
	Node *nodes[NODE_NUM] = {0};
	int num_cmd, key;
	char cmd[15], str[15];

	scanf("%d ", &num_cmd);
	while (num_cmd--) {
		scanf("%s %s", cmd, str);
		key = get_key(str) % NODE_NUM;
		if (cmd[0] == 'i') {
			nodes[key] = insert_value(nodes[key], key);
		} else {
			if (find_value(nodes[key], key)) {
				puts("yes");
			} else {
				puts("no");
			}
		}
	}
	return 0;
}