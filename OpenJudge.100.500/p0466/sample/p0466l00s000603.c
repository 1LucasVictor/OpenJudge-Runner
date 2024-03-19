// AtCoder165 C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>
#include <stdlib.h>

// qsortで用いる比較用関数．*a<*bならaが先になる．
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int revcompare(const void* a, const void* b) {
    return *(int*)b- *(int*)a;
}

struct node_t{
    int value;
    struct node_t* left;
    struct node_t* right;
};

struct node_t* mallocNode(int adds) {
    struct node_t* add;

    add = (struct node_t*)malloc(sizeof(struct node_t));
    if (add == NULL) {
        return NULL;
    }

    add->left = NULL;
    add->right = NULL;
    add->value =  adds;

    return add;
}

int addNode(struct node_t* root, int tmps) {
    struct node_t* node;
    if (root == NULL) {
        root = mallocNode(tmps);
        return 0;
    }

    node = root;
    while (1) {
        if (tmps < node->value) {
            if (node->left == NULL) {
                node->left = mallocNode(tmps);
                return 0;
            }
            node = node->left;
        }
        else if (tmps > node->value) {
            if (node->right == NULL) {
                node->right = mallocNode(tmps);
                return 0;
            }
            node = node->right;
        }
        else {
            return 1; // 重複のときのみ1を返す
        }
    }

}


int main() {
    int i,j;
    int n;
    char s[11];
    char t[12];

    scanf("%s", s);
    scanf("%s", t);

    if(strncmp(s,t,strlen(s)-1)==0 && strlen(s)+1 == strlen(t)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;

}