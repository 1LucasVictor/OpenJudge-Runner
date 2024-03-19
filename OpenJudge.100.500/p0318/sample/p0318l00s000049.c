/* ALDS1_8_C_BinarySearchTreeIII */
/* 20181126 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BinaryTreeNode_ {
	int key;
	struct BinaryTreeNode_ *parent;
	struct BinaryTreeNode_ *left;
	struct BinaryTreeNode_ *right;
} BinaryTreeNode;

void insert(BinaryTreeNode *node, int value);
BinaryTreeNode *find(BinaryTreeNode *node, int value);
void deleteNode(BinaryTreeNode *node);
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
				root->parent = NULL;
				root->left = NULL;
				root->right = NULL;
			}else {
				insert(root, value);
			}
		}else if(cmd[0] == 'f') {  /* else if(strcmp(cmd, "find") == 0)  */
			scanf("%d", &value);
			if(find(root, value) != NULL) puts("yes");
			else puts("no");
		}else if(cmd[0] == 'd') { /* else if(strcmp(cmd, "delete") == 0)  */
			scanf("%d", &value);
			deleteNode(find(root, value));
		}else { /* else if(strcmp(cmd, "print") == 0)  */
			print(root);
		}
	}

	free(root);

	return 0;
}

void insert(BinaryTreeNode *node, int value) {
	if(value < node->key) {
		if(node->left == NULL) {
			node->left = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
			node->left->key = value;
			node->left->parent = node;
			node->left->left = NULL;
			node->left->right = NULL;
		}else {
			insert(node->left, value);
		}
	}else {
		if(node->right == NULL) {
			node->right = (BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
			node->right->key = value;
			node->right->parent = node;
			node->right->left = NULL;
			node->right->right = NULL;
		}else {
			insert(node->right, value);
		}
	}
}


BinaryTreeNode *find(BinaryTreeNode *node, int value) {
	while(node != NULL && node->key != value) {
		if(node->key > value) node = node->left;
		else node = node->right;
	}

	return node;
}

void deleteNode(BinaryTreeNode *targetNode) {
	BinaryTreeNode *tempNode = NULL;
	BinaryTreeNode *childNode = NULL;
	
	tempNode = targetNode;
	if(tempNode->left != NULL && tempNode->right != NULL) {
		tempNode = tempNode->right;
		while(tempNode->left != NULL) {
			tempNode = tempNode->left;
		}
		targetNode->key = tempNode->key;
	}

	if(tempNode->left != NULL) {
		childNode = tempNode->left;
	}else {
		childNode = tempNode->right;
	}

	if(childNode != NULL) {
		childNode->parent = tempNode->parent;
	}

	if(tempNode->parent == NULL) {
		*tempNode = *childNode;
	}else {
		if(tempNode == tempNode->parent->left) {
			tempNode->parent->left = childNode;
		}else {
			tempNode->parent->right = childNode;
		}
	}
	
	free(tempNode);
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
