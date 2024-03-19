/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kundaikwangwari
 *
 * Created on August 5, 2019, 1:10 AM
 */


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{

  struct node *right;
  struct node *left;
  struct node *p;
  int key;
};

typedef struct node *Node;
Node root;



Node Find(Node x, int key){

  if(x == NULL||key == x->key)return x;
  if(key < x->key)return Find(x->left,key);
 else return Find(x->right,key);
}

void Preorder(Node u){

  if(u != NULL){
    printf(" %d", u->key);
    Preorder(u->left);
    Preorder(u->right);
  }
}

void Inorder(Node x){

  if(x != NULL){
    Inorder(x->left);
    printf(" %d", x->key);
    Inorder(x->right);
  }
}


Node MinTree(Node node){
while(node->left!=NULL)node=node->left;
  return node;
}

Node FindSuccessor(Node s){

  if(s->right != NULL)return MinTree(s->right);
  Node successor = s->p;
  while(successor != NULL && s == successor->right){

    s=successor;
    successor=successor->p;
  }

  return successor;
}

void treeDelete(Node z){

  Node toDelete, toDelete_Child;

  if(z->left == NULL || z->right == NULL)toDelete = z;
  else toDelete = FindSuccessor(z);

  if(toDelete->left != NULL)toDelete_Child =toDelete->left;
  else toDelete_Child = toDelete->right;

  if(toDelete_Child != NULL)toDelete_Child->p =toDelete->p;
  
  if(toDelete->p == NULL)root =toDelete_Child;
  else if(toDelete == toDelete->p->left)toDelete->p->left =toDelete_Child;
  else toDelete->p->right =toDelete_Child;

  if(toDelete != z)z->key=toDelete->key;
}

void InsertNode(int key){

  Node p = NULL, q = root, newNode;

  newNode = malloc(sizeof(struct node));
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;

  while(q != NULL){
    p = q;

    if(newNode->key < q->key)q =q->left;
    else q = q->right;
  }

  newNode->p = p;

  if(p == NULL)root =newNode;
  else if(newNode->key < p->key)p->left =newNode;
  else p->right =newNode;
}



int main(){

  int opp, val,flag2;//flag2 control the printing process
    char cmd[8];
    char cmd1[] = "insert";
    char cmd2[] = "print";
    char cmd3[] = "find";
    char cmd4[] = "delete";
    
    scanf("%d",&opp);
    
    for(int a = 0; a < opp; a++){
        scanf("%s",cmd);

    if (strcmp(cmd3,cmd)==0){
      scanf("%d", &val);

      Node Query = Find(root, val);
      if ( Query != NULL )
        printf("yes\n");
      else
        printf("no\n");
    }
    if(strcmp(cmd1,cmd)==0){

      scanf("%d", &val);
      InsertNode(val);
    }
    if(strcmp(cmd2,cmd)==0){

      Inorder(root);
      printf("\n");

      Preorder(root);
      printf("\n");

    } 
    if (strcmp(cmd4,cmd)==0){

      scanf("%d", &val);
      treeDelete(Find(root, val));
    }
  }
  return 0;
}
