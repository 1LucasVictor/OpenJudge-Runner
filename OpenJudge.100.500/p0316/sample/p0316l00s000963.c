#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
  int id;
  struct node *parent;
  struct node *child[2];
} *nodePointer;
nodePointer root;
nodePointer make1node(int);
void insert(nodePointer);
void preorderWalk(nodePointer);
void inorderWalk(nodePointer);
int main(void)
{
  int i;//counter
  int n;//the number of operation
  char op[10];//operation
  int id;//inserted number
  nodePointer p;
  root=NULL;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%s",op);
      if(strcmp(op,"insert")==0)
        {
          scanf("%d",&id);
          p=make1node(id);
          insert(p);
        }
      else if(strcmp(op,"print")==0)
        {
          inorderWalk(root);
          preorderWalk(root);
        }
      else
        {
          printf("undefined operation\n");
          exit(1);
        }
    }
  return 0;
}
nodePointer make1node(int id)
{
  nodePointer p;
  p=(nodePointer)malloc(sizeof(struct node));
  p->id=id;
  p->parent=NULL;
  p->child[0]=NULL;
  p->child[1]=NULL;
  return p;
}
void insert(nodePointer p)
{
  nodePointer parent=NULL;//parent of p
  nodePointer temp=root;
  while(temp!=NULL)
    {
      parent=temp;
      if(p->id < temp->id) temp=temp->child[0];
      else temp=temp->child[1];
    }
  p->parent=parent;
  if(parent==NULL) root=p;
  else if(p->id < parent->id) parent->child[0]=p;
  else parent->child[1]=p;
}
void preorderWalk(nodePointer p)
{
  if(p!=NULL)
    {
      printf(" %d",p->id);
      preorderWalk(p->child[0]);
      preorderWalk(p->child[1]);
      if(p==root)
        {
          printf("\n");
        }
    }
}
void inorderWalk(nodePointer p)
{
  if(p!=NULL)
    {
      inorderWalk(p->child[0]);
      printf(" %d",p->id);
      inorderWalk(p->child[1]);
      if(p==root)
        {
          printf("\n");
        }
    }
}

