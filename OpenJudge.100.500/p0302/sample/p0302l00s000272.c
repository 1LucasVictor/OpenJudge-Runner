#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct _Node {
    double key;
    struct _Node *next, *prev;
} Node;
Node *nil;

Node *listSearch(double key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
	cur = cur->next;
    }
    return cur;
}

void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(double key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int dictionary(char command[], char moji[]) {
    double digit = 0, key = 0;
    int slen = strlen(moji);
    while (slen--) {
	switch (moji[slen]) {
	    case 'A':
	    	digit = 1;
		break;
	    case 'C':
	    	digit = 2;
		break;
	    case 'G':
	    	digit = 3;
		break;
	    case 'T':
	    	digit = 4;
		break;
	    default:
	    	return 1;
	}
	key += digit * pow(10, slen);
    }

    if (strcmp(command, "insert") == 0) {
	insert(key);
    } else if (strcmp(command, "find") == 0) {
	if (listSearch(key) != nil) {
	    printf("yes\n");
	} else {
	    printf("no\n");
	}
    } else {
	return 1;
    }
    return 0;
}

int main() {
    int i, n;
    int ret = 0;
    init();
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	char command[7], moji[13];
	scanf("%s %s", command, moji);
	ret = dictionary(command, moji) | ret;
    }
    return ret;
}