#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct BST {
    struct Node {
	int data;
	struct BST *left;
	struct BST *right;
    } *node;
} *BST;

typedef struct Node * Node;



BST
BSTNewTree(void)
{
    BST empty = (BST)malloc(sizeof(struct BST));
    empty->node = NULL;
    return empty;
}

void
BSTCreateLeaf(BST leaf, int item)
{
    leaf->node = (Node)malloc(sizeof(struct Node));
    leaf->node->data = item;
    leaf->node->left = BSTNewTree();
    leaf->node->right = BSTNewTree();
}

bool
BSTIsEmpty(BST tree)
{
    return tree->node == NULL;
}

void
BSTInsert(BST tree, int item)
{
    while (1)
    {
	if (BSTIsEmpty(tree))
	{
	    BSTCreateLeaf(tree, item);
	    break;
	}
	else if (item < tree->node->data)
	    tree = tree->node->left;
	else if (item > tree->node->data)
	    tree = tree->node->right;
    }
}

bool
BSTSearch(BST tree, int key)
{
    while (1)
    {
	if (BSTIsEmpty(tree))
	    return false;
	else if (key < tree->node->data)
	    tree = tree->node->left;
	else if (key > tree->node->data)
	    tree = tree->node->right;
	else
	    return true;
    }
}

void
BSTFree(BST tree)
{
    if (BSTIsEmpty(tree))
	free(tree);
    else
    {
	BSTFree(tree->node->left);
	BSTFree(tree->node->right);
	free(tree->node);
	free(tree);
    }
}

void
BSTPrintInorder(BST tree)
{
    if (BSTIsEmpty(tree))
	return;

    if (!BSTIsEmpty(tree->node->left))
	BSTPrintInorder(tree->node->left);	

    printf(" %d", tree->node->data);

    if (!BSTIsEmpty(tree->node->right))
	BSTPrintInorder(tree->node->right);	
}

void
BSTPrintPreorder(BST tree)
{
    if (BSTIsEmpty(tree))
	return;

    printf(" %d", tree->node->data);

    if (!BSTIsEmpty(tree->node->left))
	BSTPrintPreorder(tree->node->left);	

    if (!BSTIsEmpty(tree->node->right))
	BSTPrintPreorder(tree->node->right);	
}

int main(void)
{
    int i, n, key;
    char command[10], input[100];
    BST bst = BSTNewTree();

    scanf("%d\n", &n);
    for (i=0; i<n; i++)
    {
	fgets(input, 100, stdin);
	sscanf(input, "%s %d\n", command, &key);
	if (strcmp(command, "insert") == 0)
	    BSTInsert(bst, key);
	else
	{
	    BSTPrintInorder(bst);
	    puts("");
	    BSTPrintPreorder(bst);
	    puts("");
	}
    }

    BSTFree(bst);

    return 0;
}