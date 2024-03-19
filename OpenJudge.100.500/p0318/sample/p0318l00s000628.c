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
    BST tree = (BST)malloc(sizeof(struct BST));
    tree->node = NULL;
    return tree;
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
BSTDelete(BST tree, int key)
{
    bool noLeft, noRight;
    BST parent = tree;
    int leftOrRight; /* left = 0, right = 1 */
    
    while (1)
    {
	if (BSTIsEmpty(tree))
	    break;
	else if (key < tree->node->data)
	{
	    parent = tree;
	    tree = tree->node->left;
	    leftOrRight = 0;
	}
	else if (key > tree->node->data)
	{
	    parent = tree;
	    tree = tree->node->right;
	    leftOrRight = 1;
	}
	else
	{
	    noLeft  = BSTIsEmpty(tree->node->left);
	    noRight = BSTIsEmpty(tree->node->right);

	    /* delete root */
	    if (tree == parent)
	    {
		if (noLeft && noRight) /* No chlildren */
		{
		    free(tree->node->left);
		    free(tree->node->right);
		    free(tree->node);
		    tree->node = NULL;
		}
		else if (noLeft) /* Only right child */
		{
		    *tree = *tree->node->right;
		    free(parent->node->left);
		    free(parent->node);
		    free(parent);
		}
		else if (noRight) /* Only left child */
		{
		    *tree = *tree->node->left;
		    free(parent->node->right);
		    free(parent->node);
		    free(parent);
		} 
		else /* Both children */
		{
		    tree->node->data = tree->node->left->node->data;
		    BSTDelete(tree->node->left, tree->node->left->node->data);
		}
	    }
	    /* delete leaf */
	    else if (noLeft && noRight)/* No children */
	    {
		if (leftOrRight == 0)
		    parent->node->left = BSTNewTree();
		else
		    parent->node->right = BSTNewTree();
		BSTFree(tree);
	    }
	    /* delete inner node */
	    else if (noLeft) /* Only right child */
	    {
		if (leftOrRight == 0)
		    parent->node->left = tree->node->right;
		else
		    parent->node->right = tree->node->right;
		free(tree->node->left);
		free(tree->node);
		free(tree);
	    }
	    else if (noRight) /* Only left child */
	    {
		if (leftOrRight == 0)
		    parent->node->left = tree->node->left;
		else
		    parent->node->right = tree->node->left;
		free(tree->node->right);
		free(tree->node);
		free(tree);
	    }
	    else /* Both children */
	    {
		parent->node->data = tree->node->right->node->data;
		BSTDelete(tree->node->right, tree->node->right->node->data);
	    }
	    break;
	}
    }
}

void
BSTPrintInorderHelper(BST tree)
{
    if (BSTIsEmpty(tree))
	return;

    if (!BSTIsEmpty(tree->node->left))
	BSTPrintInorderHelper(tree->node->left);	

    printf(" %d", tree->node->data);

    if (!BSTIsEmpty(tree->node->right))
	BSTPrintInorderHelper(tree->node->right);	
}

void
BSTPrintInorder(BST tree)
{
    if (BSTIsEmpty(tree))
	return;
    else
    {
	BSTPrintInorderHelper(tree);
	puts("");
    }
}

void
BSTPrintPreorderHelper(BST tree)
{
    if (BSTIsEmpty(tree))
	return;

    printf(" %d", tree->node->data);

    if (!BSTIsEmpty(tree->node->left))
	BSTPrintPreorderHelper(tree->node->left);	

    if (!BSTIsEmpty(tree->node->right))
	BSTPrintPreorderHelper(tree->node->right);	
}

void
BSTPrintPreorder(BST tree)
{
    if (BSTIsEmpty(tree))
	return;
    else
    {
	BSTPrintPreorderHelper(tree);
	puts("");
    }
}

void
BSTPrintTree(BST tree)
{
    BSTPrintInorder(tree);
    BSTPrintPreorder(tree);
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
	else if (strcmp(command, "delete") == 0)
	    BSTDelete(bst, key);
	else if (strcmp(command, "find") == 0)
	    BSTSearch(bst, key) ? printf("yes\n") : printf("no\n");
	else
	    BSTPrintTree(bst);
    }

    BSTFree(bst);

    return 0;
}