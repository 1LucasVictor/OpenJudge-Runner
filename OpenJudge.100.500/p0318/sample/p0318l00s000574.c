#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    struct Node* parent;
    struct Node* left;
    struct Node* right;
    int key;
};

static struct Node* CreateNode(int key) {
    struct Node* p_node = malloc(sizeof(struct Node));

    p_node->parent = NULL;
    p_node->left   = NULL;
    p_node->right  = NULL;
    p_node->key    = key;

    return p_node;
}

static void DestroyNode(struct Node* p_node) {
    free(p_node);

    return;
}

static struct Node* Insert(struct Node* tree, struct Node* z) {
    struct Node* ret = NULL;
    struct Node* y = NULL;
    struct Node* x = tree;

    while ( x != NULL ) {
        y = x;
        if ( z->key < x->key ) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    z->parent = y;

    if ( y == NULL ) {
        ret = z;
    } else if ( z->key < y->key ) {
        y->left = z;
        ret = tree;
    } else {
        y->right = z;
        ret = tree;
    }

    return ret;
}

static struct Node* Find(const struct Node* tree, int key) {

    if ( !tree ) {
        return NULL;
    }

    if ( tree->key == key ) {
        return (struct Node*)tree;
    }
    if ( key < tree->key ) {
        return Find(tree->left, key);
    } else {
        return Find(tree->right, key);
    }
}

static struct Node* FindMin(const struct Node* tree) {

    if ( tree->left == NULL ) {
        return (struct Node*)tree;
    }

    return FindMin(tree->left);
}

static struct Node* Delete(struct Node* tree, struct Node* p_node) {
    struct Node* ret = tree;
 
      /* left == right == NULL */
    if ( !p_node->left && !p_node->right ) {
        if ( p_node->parent ) {
            if ( p_node->parent->left == p_node ) {
                p_node->parent->left = NULL;
            } else {
                p_node->parent->right = NULL;
            }
            DestroyNode(p_node);
        } else {
            ret = NULL;
            DestroyNode(p_node);
        }
        return ret;
    }

      /* left == NULL, right != NULL */
    if ( !p_node->left ) {
        if ( p_node->parent ) {
            if ( p_node->parent->left == p_node ) {
                p_node->parent->left = p_node->right;
                p_node->right->parent = p_node->parent;
            } else {
                p_node->parent->right = p_node->right;
                p_node->right->parent = p_node->parent;                
            }
            DestroyNode(p_node);
        } else {
            ret = p_node->right;
            p_node->right->parent = p_node->parent;
            DestroyNode(p_node);
        }
        return ret;
    }

      /* left != NULL, right == NULL */
    if ( !p_node->right ) {
        if ( p_node->parent ) {
            if ( p_node->parent->left == p_node ) {
                p_node->parent->left = p_node->left;
                p_node->left->parent = p_node->parent;
            } else {
                p_node->parent->right = p_node->left;
                p_node->left->parent = p_node->parent;
            }
            DestroyNode(p_node);
        } else {
            ret = p_node->left;
            p_node->left->parent = p_node->parent;
            DestroyNode(p_node);
        }
        return ret;
    }

      /* left != NULL, right != NULL */
    struct Node* next = FindMin(p_node->right);
    struct Node* next_parent = next->parent;
    struct Node* next_right  = next->right;    

    if ( next_parent == p_node ) {
        next->left   = p_node->left;
        if ( next->left ) {
            next->left->parent = next;
        }

        if ( p_node->parent ) {
            if ( p_node->parent->left == p_node ) {
                p_node->parent->left = next;
                next->parent = p_node->parent;
            } else {
                p_node->parent->right = next;
                next->parent = p_node->parent;
            }
        }
    } else {
        next->left   = p_node->left;
        if ( next->left ) {
            next->left->parent = next;
        }

        next->right   = p_node->right;
        if ( next->right ) {
            next->right->parent = next;
        }

        if ( p_node->parent ) {
            if ( p_node->parent->left == p_node ) {
                p_node->parent->left = next;
                next->parent = p_node->parent;
            } else {
                p_node->parent->right = next;
                next->parent = p_node->parent;
            }
        }

        next_parent->left = next_right;
        if ( next_right ) {
            next_right->parent = next_parent;
        }
    }
    if ( p_node == tree ) {
        ret = next;
    }
    DestroyNode(p_node);

    return ret;
}

static void PrintInorder(struct Node* tree) {

    if ( tree == NULL ) {
        return;
    }

    PrintInorder(tree->left);
    printf(" %d", tree->key);
    PrintInorder(tree->right);

    return;
}

static void PrintPreorder(struct Node* tree) {
    if ( tree == NULL ) {
        return;
    }

    printf(" %d", tree->key);
    PrintPreorder(tree->left);
    PrintPreorder(tree->right);

    return;
}

static void DestroyTree(struct Node* tree) {
    if ( tree == NULL ) {
        return;
    }

    DestroyTree(tree->left);
    DestroyTree(tree->right);
    DestroyNode(tree);

    return;
}

int main(int argc, char* argv[]) {
    int m;
    int i;
    char order[16];
    struct Node* tree = NULL;

    scanf("%d\n", &m);

    for ( i = 0; i < m; i++ ) {
        int key;        
        scanf("%s %d\n", order, &key);
        if ( order[0] == 'i' ) {
            struct Node* p_node = CreateNode(key);
            tree = Insert(tree, p_node);
        } else if ( order[0] == 'f' ) {
            struct Node* p_node = Find(tree, key);
            printf("%s\n", p_node != NULL ? "yes" : "no");            
        } else if ( order[0] == 'd' ) {
            struct Node* p_node = Find(tree, key);
            tree = Delete(tree, p_node);
        } else if ( order[0] == 'p' ) {
            PrintInorder(tree);
            printf("\n");
            PrintPreorder(tree);
            printf("\n");            
        }
    }

    DestroyTree(tree);

    return 0;
}


