#include <stdio.h>
#define MAX 10000

typedef struct{
	int parent;
	int left;
	int right; }Node;

Node Tree[MAX];
int n;

void preParse(int u){
    if ( u == -1) return;
        printf(" %d", u);
        preParse(Tree[u].left);
        preParse(Tree[u].right);
}

void inParse(int u){
    if ( u == -1) return;
        inParse(Tree[u].left);
        printf(" %d", u);
        inParse(Tree[u].right);
}

void postParse(int u){
    if ( u == -1) return;
        postParse(Tree[u].left);
        postParse(Tree[u].right);
        printf(" %d", u);
}

int main(void)
{
    int i, v, l, r, root;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        Tree[i].parent = -1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &v, &l, &r);
        Tree[v].left = l;
        Tree[v].right = r;
        if (l != -1 ) Tree[l].parent = v;
        if (r != -1 ) Tree[r].parent = v;
    }

    for (i = 0; i < n; i++){
        if (Tree[i].parent == -1) 
        root = i;
    }

    printf("Preorder\n");
    preParse(root); printf("\n");
    printf("Inorder\n");
    inParse(root); printf("\n");
    printf("Postorder\n");
    postParse(root); printf("\n");

    return 0;
}
