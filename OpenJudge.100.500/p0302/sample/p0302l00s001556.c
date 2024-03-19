#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct dictionary {
	char str[1000000];
	struct dictionary *p_left;
	struct dictionary *p_right;
}STR;

STR *p_root = NULL;

void insert(char value[]);
char *find(char value[]);
STR *makeNewnode(char value[]);

int main(void) {

	int n;
	int i = 0;
	char value[12];
	char command[10];
	STR *p_root = NULL;

	scanf("%d", &n);

	while (scanf("%s", &value) != EOF) {
		i++;
		if (value[0] == 'i' || value[0] == 'f') {
			strcpy(command, value);
		}
		else {
			if (strcmp(command, "insert") == 0) {
				insert(value);
			}
			else {
				printf("%s\n", find(value));
			}
		}
		if (i >= 2 * n) {
			break;
		}
	}
	return 0;
}

void insert(char value[]) {

	STR *p_newlist = NULL;
	STR *p_list;

	p_newlist = makeNewnode(value);

	if (p_root == NULL) {
		p_root = p_newlist;
		return;
	}
	p_list = p_root;
	
	while (1) {
		if (strcmp(p_list->str, value) > 0) {
			if (p_list->p_left == NULL) {
				p_list->p_left = p_newlist;
				break;
			}
			else {
				p_list = p_list->p_left;
			}
		}
		else {
			if (p_list->p_right == NULL) {
				p_list->p_right = p_newlist;
				break;
			}
			else {
				p_list = p_list->p_right;
			}
		}
	}
}

char *find(char value[]) {

	STR *p_list;
	char *ans = NULL;

	p_list = p_root;
	if (p_list == NULL) {
		ans = "no";
		return ans;
	}
	while (1) {
		if (strcmp(p_list->str, value) > 0) {
			if (p_list->p_left == NULL) {
				ans = "no";
				return ans;
			}
			else {
				p_list = p_list->p_left;
			}
		}
		else if(strcmp(p_list->str, value) < 0){
			if (p_list->p_right == NULL) {
				ans = "no";
				return ans;
			}
			else {
				p_list = p_list->p_right;
			}
		}
		else {
			ans = "yes";
			return ans;
		}
	}
}

STR *makeNewnode(char value[]) {

	STR *p_newlist;

	p_newlist = (STR*)malloc(sizeof(STR));
	strcpy(p_newlist->str, value);
	p_newlist->p_left = NULL;
	p_newlist->p_right = NULL;

	return p_newlist;
}