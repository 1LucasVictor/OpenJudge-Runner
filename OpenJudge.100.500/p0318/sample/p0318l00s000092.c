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
nodePointer find(nodePointer,int);
void delete(nodePointer);
void preorderWalk(nodePointer);
void inorderWalk(nodePointer);
void printNodeArray(nodePointer);
int main(void)
{
  int i;//counter
  int n;//the number of operation
  char op[10];//operation
  int id;//inserted ,found, or deleted number
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
      else if(strcmp(op,"find")==0)
	{
	  scanf("%d",&id);
	  if(find(root,id)!=NULL) printf("yes\n");
	  else printf("no\n");
	}
      else if(strcmp(op,"delete")==0)
	{
	  scanf("%d",&id);
	  p=find(root,id);
	  delete(p);
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
  if(p==NULL) return;
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
nodePointer find(nodePointer p,int id)
{
  if(p==NULL) return NULL;
  if(p->id < id) return find(p->child[1],id);
  if(p->id == id) return p;
  if(p->id > id) return find(p->child[0],id);
}
void delete(nodePointer p)
{
  int index,index2;
  nodePointer nextInorder;
  if(p==NULL) return;
  if(p->child[0]==NULL&&p->child[1]==NULL)
    {
      if(p->parent->child[0]==p) index=0;
      else index=1;
      p->parent->child[index]=NULL;
    }
  else if(p->child[0]!=NULL&&p->child[1]!=NULL)
    {
      for(nextInorder=p->child[1];nextInorder->child[0]!=NULL;nextInorder=nextInorder->child[0]);
      p->id=nextInorder->id;
      delete(nextInorder);
    }
  else
    {
      if(p->child[0]!=NULL) index=0;
      else index=1;
      if(p->parent->child[0]==p) index2=0;
      else index2=1;
      p->parent->child[index2]=p->child[index];
      p->child[index]->parent=p->parent;
    }
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
void printNodeArray(nodePointer p)
{
  if(p==NULL) return;
  printf("Node %d: ",p->id);
  if(p->parent!=NULL) printf("parent=%d, ",p->parent->id);
  printf("\n");
  printNodeArray(p->child[0]);
  printNodeArray(p->child[1]);
}


