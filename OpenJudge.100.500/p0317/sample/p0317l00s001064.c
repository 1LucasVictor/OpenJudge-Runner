
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UND_NODE -1
#define UND_HEIGHT -1
#define MAX_CMD_LENGTH 10

typedef struct {
//    int id;
    int right;
    int left;
    int parent;
    int height;
} BinaryNode;



int nodeDepthFromId(BinaryNode nodes[], int length, int id) {
    int i = 0;
    while (nodes[id].parent != UND_NODE) {
        i++;
        id = nodes[id].parent;
    }
    return i;
}

int nodeSiblingFromId(BinaryNode nodes[], int length, int id) {
    if (nodes[id].parent == UND_NODE)
        return UND_NODE;
    
    BinaryNode parentNode = nodes[nodes[id].parent];
    
    if (parentNode.left == id && parentNode.right != UND_NODE)
        return parentNode.right;
    
    if (parentNode.right == id && parentNode.left != UND_NODE)
        return parentNode.left;
    
    // no sibling
    return UND_NODE;
}

int constructHeights(BinaryNode nodes[], int length) {
    int i, parentId, heightCount;
    int rootId = 0; // assuming only single root
    
    for (i = 0; i < length; i++) {
        if (nodes[i].left == UND_NODE && nodes[i].right == UND_NODE) {
            nodes[i].height = 0;

            parentId = nodes[i].parent;
            heightCount = 1;
            while (1) {
                if (parentId == UND_NODE) {
                    rootId = parentId;
                    break;
                }
                if (nodes[parentId].height < heightCount)
                    nodes[parentId].height = heightCount;
                

                heightCount++;
                parentId = nodes[parentId].parent;
            }
        }
    }
    
    return rootId;
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        if (i) printf(", ");
        printf("%d", array[i]);
    }
}






struct BSTnode {
    int key;
    struct BSTnode * right;
    struct BSTnode * left;
    struct BSTnode * parent;
    int height;
};

typedef struct BSTnode * Node; // pointer

typedef struct {
    Node root;
} Tree;

Node nodeCreate(int key) {
    Node node = (Node)malloc(sizeof(struct BSTnode));
    node->key = key;
    node->height = UND_HEIGHT;
    node->right = node->left = node->parent = NULL;
    return node;
}

int nodeDepth(Node node) {
    int i = 0;
    while (node->parent != NULL) {
        i++;
        node = node->parent;
    }
    return i;
}

Node nodeSibling(Node node) {
    if (node->parent == NULL)	
        return NULL; // NULL POINTER
    
    Node parentNode = node->parent;
    
    if (parentNode->left == node && parentNode->right != NULL)
        return parentNode->right;
    
    if (parentNode->right == node && parentNode->left != NULL)
        return parentNode->left;
    
    // no sibling
    return NULL; // NULL POINTER
}

void treeInsert(Node *p_root, Node newNode) {
    Node nodeParent = NULL;
    Node nodeX = *p_root;

    // find its place
    //- it should be a leaf
    while (nodeX != NULL) {
        nodeParent = nodeX;
        
        if (newNode->key < nodeX->key)
            nodeX = nodeX->left;  // <
        else
            nodeX = nodeX->right; // >=
    }
    newNode->parent = nodeParent;
    

    // put it in as a leaf
    if (nodeParent == NULL)// tree is empty
        *p_root = newNode;
    else if (newNode->key < nodeParent->key) 
        nodeParent->left = newNode;
    else
        nodeParent->right = newNode;
}
Node treeSearch(Node root, int key) {
    if (root == NULL || key == root->key)
        return root;
    
    if (key < root->key)
        return treeSearch(root->left, key);
    else
        return treeSearch(root->right, key);
}

void preParse(Node node) {
    if (node == NULL)
        return;
    
    printf(" %d", node->key);
    preParse(node->left);
    preParse(node->right);
}

void inParse(Node node) {
    if (node == NULL)
        return;
    
    inParse(node->left);
    printf(" %d", node->key);
    inParse(node->right);
}

void postParse(Node node) {
    if (node == NULL)
        return;
    
    postParse(node->left);
    postParse(node->right);
    printf(" %d", node->key);
}






int main(int argc, char** argv) {
    int nCommands;
    scanf("%d", &nCommands);
    
    char command[MAX_CMD_LENGTH];
    
    Node root;
    Node node;
    int i, j, nodeKey;
    
    root = NULL;
    
    for (i = 0; i < nCommands; i++) {
        scanf("%s", command);
        
        if (strcmp(command, "insert") == 0) {
            scanf("%d", &(nodeKey)); // id
            node = nodeCreate(nodeKey);
            treeInsert(&root, node);
        }
        else if (strcmp(command, "find") == 0) {
            scanf("%d", &(nodeKey)); // id
            node = treeSearch(root, nodeKey);
            if (node != NULL)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if (strcmp(command, "print") == 0) {
            inParse(root);
            printf("\n");
            preParse(root);
            printf("\n");
        }
    }
    
//    // for height
//    rootId = constructHeights(nodes, nNodes);
    
    

    return (EXIT_SUCCESS);
}


