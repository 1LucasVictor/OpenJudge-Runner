#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hashCode(char *s) {
	char n = 0;
	while (*s) {
		n ^= *s;
		++s;
	}
	return (int)n;
}

typedef struct _list {
	char str[20];
	struct _list *next;
} LIST, *PLIST;

PLIST table[256] = { NULL };

PLIST append(PLIST root, PLIST list) {
	if (root == NULL) {
		return list;
	}
	root->next = append(root->next, list);
	return root;
}

void insert(PLIST list) {
	int hash = hashCode(list->str);
	table[hash] = append(table[hash], list);
}

int find(PLIST list) {
	int hash = hashCode(list->str);
	PLIST cur = table[hash];
	while (cur != NULL) {
		if (strcmp(cur->str, list->str) == 0) {
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}

PLIST newList(void) {
	PLIST list = malloc(sizeof(LIST));
	list->next = NULL;
	return list;
}

int main(void) {
	
	int n, i;
	char cmd[100];
	PLIST list;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i) {
		list = newList();
		scanf("%s %s", cmd, list->str);
		if (cmd[0] == 'i') {
			insert(list);
		} else if (find(list)) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	
	return 0;
}