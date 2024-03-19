#include <stdio.h>
#include <stdlib.h>

struct node{
	int key;
	struct node *next;
	struct node *prev;
};

typedef struct node *NodePointer;

NodePointer nil;

void init(){
	nil = malloc(sizeof(struct node));
	nil->next = nil;
	nil->prev = nil;
}

void deleteNode(NodePointer t){
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

void insert(int key){
	NodePointer x;
	x = malloc(sizeof(struct node));
	x->key = key;
	x->next = nil->next;
	x->prev = nil;
	x->next->prev = x;
	nil->next = x;
}

void deleteFirst(){
	NodePointer t = nil->next;
	if(t == nil){
		return;
	}
	deleteNode(t);
}

int main(int argc, char **argv)
{
	int key, i = 0;
	int size = 0;
	char com[100];
	int ans = 0;

	init();
	NodePointer t = nil->next;

	while(scanf("%s", com) != EOF){
		
		if(com[0] == '+'){
			ans = t->next->key + t->key;
			deleteNode(t->next);
			t->key = ans;
		}
		else if(com[0] == '-'){
			ans = t->next->key - t->key;
			deleteNode(t->next);
			t->key = ans;
		}
		else if(com[0] == '*'){
			ans = t->next->key * t->key;
			deleteNode(t->next);
			t->key = ans;
		}
		else{
			insert(atoi(com));
		}
		t = nil->next;
	}
	printf("%d\n", t->key);
	deleteFirst();
	return 0;
}






