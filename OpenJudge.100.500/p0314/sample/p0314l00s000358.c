/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Ivan
 *
 * Created on July 9, 2018, 8:55 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
#define NIL -1

typedef struct { int parent, left, right; }Node;

Node Tree[MAX];
int size, Depth[MAX], Height[MAX];

void preParse(int u);
void inParse(int u);
void postParse(int u);
int getDepth(int u);
int getSibling(int u);
void print(int u);

int main(int argc, char** argv) {
    int i, index, left, right, root;
    scanf("%d", &size);

    //Initialize the binary tree
    for ( i = 0; i < size; i++ ) {
      Tree[i].parent = NIL;
    }

    //Put all value into the tree
    for ( i = 0; i < size; i++ ){
      scanf("%d %d %d", &index, &left, &right);
      Tree[index].left = left;
      Tree[index].right = right;
      if ( left != NIL ) Tree[left].parent = index;
      if ( right != NIL ) Tree[right].parent = index;
    }

    //Get depth of each node
//    for ( i = 0; i < size; i++ ){
//      Depth[i] = getDepth(i);
//      Height[i] = 0;
//    }
//
    for ( i = 0; i < size; i++ ){
          if ( Tree[i].left == NIL && Tree[i].right == NIL )
            {
              Height[i] = 0;
              int parent = Tree[i].parent;
              int child = left;
              while(left)
              {
                  if ( parent == NIL ) break;
                  if ( Height[parent] < child ) Height[parent] = child;
                  child++;
                  parent = Tree[parent].parent;
              }
          }
    }
    for (i = 0; i < size; ++i) if (Tree[i].parent == NIL){ root = i; break; }
    printf("Preorder\n");
    preParse(root);
    printf("\n");
    printf("Inorder\n");
    inParse(root);
    printf("\n");
    printf("Postorder\n");
    postParse(root);
    printf("\n");
//    for ( i = 0; i < size; i++ ) print(i);
    return (EXIT_SUCCESS);
}

void preParse(int u)
{
    if (u == NIL) return;
    printf(" %d", u);
    preParse(Tree[u].left);
    preParse(Tree[u].right);
}

void inParse(int u)
{
    if (u == NIL) return;
    inParse(Tree[u].left);
    printf(" %d", u);
    inParse(Tree[u].right);
}

void postParse(int u)
{
    if (u == NIL) return;
    postParse(Tree[u].left);
    postParse(Tree[u].right);
    printf(" %d", u);
}

int getDepth(int u)
{
    int depth = 0;
    while(1){
        u = Tree[u].parent;
        if ( u == NIL ) break;
        depth++;
    }
    return depth;
}

int getSibling(int u)
{
    if ( Tree[u].parent == NIL ) return NIL;
    if ( Tree[Tree[u].parent].left != u && Tree[Tree[u].parent].left != NIL ) return Tree[Tree[u].parent].left;
    if ( Tree[Tree[u].parent].right != u && Tree[Tree[u].parent].right != NIL ) return Tree[Tree[u].parent].right;
    return NIL;
}

//void print(int u){
//    printf("node %d: ", u);
//
//    printf("parent = %d, ", Tree[u].parent);
//    printf("sibling = %d, ", getSibling(u));
//    int degree = 0;
//    if ( Tree[u].left != NIL ) degree++;
//    if ( Tree[u].right != NIL ) degree++;
//    printf("degree = %d, ", degree);
//    printf("depth = %d, ", Depth[u]);
//    printf("height = %d, ", Height[u]);
//
//    if ( Tree[u].parent == NIL ) printf("root\n");
//    else if ( Tree[u].left == NIL && Tree[u].right == NIL ) printf("leaf\n");
//    else printf("internal node\n");
//}
