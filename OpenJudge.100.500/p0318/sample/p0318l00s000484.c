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
BSTFreeNode(Node node)
{
    if (node == NULL)
	return;
    else
    {
	free(node->left);
	free(node->right);
	free(node);
    }
}

void
BSTDelete(BST tree, int key)
{
    while (1)
    {
	if (BSTIsEmpty(tree))
	    break;
	else if (key < tree->node->data)
	    tree = tree->node->left;
	else if (key > tree->node->data)
	    tree = tree->node->right;
	else
	{
	    bool noLeft  = BSTIsEmpty(tree->node->left);
	    bool noRight = BSTIsEmpty(tree->node->right);

	    if (noLeft && noRight)/* No children */
	    {
		BSTFreeNode(tree->node);
		tree->node = NULL;
	    }
	    else if (noLeft) /* Only right child */
	    {
		Node temp = tree->node;
		tree->node = tree->node->right->node;
		BSTFreeNode(temp);
	    }
	    else if (noRight) /* Only left child */
	    {
		Node temp = tree->node;
		tree->node = tree->node->left->node;
		BSTFreeNode(temp);
	    }
	    else /* Both children */
	    {
		BST minimalLeaf = tree->node->right;

		while (!BSTIsEmpty(minimalLeaf->node->left))
		    minimalLeaf = minimalLeaf->node->left;

		tree->node->data = minimalLeaf->node->data;

		if (BSTIsEmpty(minimalLeaf->node->right))
		{
		    BSTFreeNode(minimalLeaf->node);
		    minimalLeaf->node = NULL;
		}
		else
		{
		    BST temp = minimalLeaf->node->right;
		    minimalLeaf->node = minimalLeaf->node->right->node;
		    free(temp);
		}
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