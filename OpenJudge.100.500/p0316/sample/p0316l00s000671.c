/* ALDS1_9_A: Binary search trees */
/* 20181126 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BinaryTreeNode_ {
	int key;
	struct BinaryTreeNode_ *left;
	struct BinaryTreeNode_ *right;
} BinaryTreeNode;

void insert(BinaryTreeNode *node, int value);
void print(BinaryTreeNode *node);
void Inorder(BinaryTreeNode *node);
void Preorder(BinaryTreeNode *node);

int main(void) {
	int i, n, value;
	char cmd[7];

	BinaryTreeNode *root = NULL;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", cmd);
		if(cmd[0] == 'i') { /* strcmp(cmd, "insert") == 0 */
			scanf("%d", &value);
			if(root == NULL) {
				root = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
				root->key = value;
				root->left = NULL;
				root->right = NULL;
			}else {
				insert(root, value);
			}
		}else { /* else if(strcmp(cmd, "print") == 0)  */
			print(root);
		}
	}

	return 0;
}


void insert(BinaryTreeNode *node, int value) {
	if(value < node->key) {
		if(node->left == NULL) {
			node->left = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
			node->left->key = value;
			node->left->left = NULL;
			node->left->right = NULL;
		}else {
			insert(node->left, value);
		}
	}else {
		if(node->right == NULL) {
			node->right = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
			node->right->key = value;
			node->right->left = NULL;
			node->right->right = NULL;
		}else {
			insert(node->right, value);
		}
	}
}

void print(BinaryTreeNode *node) {
	Inorder(node);
	printf("\n");
	Preorder(node);
	printf("\n");
}

void Inorder(BinaryTreeNode *node) {
	if(node == NULL) return ;
	Inorder(node->left);
	printf(" %d", node->key);
	Inorder(node->right);
}

void Preorder(BinaryTreeNode *node) {
	if(node == NULL) return;
	printf(" %d", node->key);
	Preorder(node->left);
	Preorder(node->right);
}

