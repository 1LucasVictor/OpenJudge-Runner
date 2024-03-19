#include <stdio.h>
#include <stdlib.h>
 
int code[256] = { 0 };
 
typedef struct _tree {
    int flag;
    struct _tree * (list[4]);
} TREE, *PTREE;
 
PTREE newTree(void) {
    PTREE tree = (PTREE)calloc(1, sizeof(TREE));
    return tree;
}
 
void insert(PTREE root, char *str) {
    int i = code[(int)*str];
    if (*str == '\0') {
        root->flag = 1;
        return;
    }
    if (root->list[i] == NULL) {
        root->list[i] = newTree();
    }
    insert(root->list[i], str + 1);
}
 
int find(PTREE root, char *str) {
    int i = code[(int)*str];
    if (*str == '\0') {
        return root->flag;
    }
    if (root->list[i] == NULL) {
        return 0;
    }
    return find(root->list[i], str + 1);
}
 
int main(void) {
    int i, n;
    char cmd[100], str[100];
    PTREE root = newTree();
    code['A'] = 0;
    code['C'] = 1;
    code['G'] = 2;
    code['T'] = 3;
     
    scanf("%d", &n);
     
    for (i = 0; i < n; ++i) {
        scanf("%s %s", cmd, str);
        if (cmd[0] == 'i') {
            insert(root, str);
        } else if (find(root, str)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
     
    return 0;
}