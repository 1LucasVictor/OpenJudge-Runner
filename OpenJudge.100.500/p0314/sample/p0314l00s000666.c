#include<stdio.h>
#include<stdlib.h>

struct nod
{
  struct nod* parent;
  struct nod* left;
  struct nod* right;
  int node_number;
  int height_check;
};

typedef struct nod *NodePointer;


void visit(int);
void visit2(int);
void visit3(int);

NodePointer node[27];

main()
{
  int i,j,n,k;
  int n1,n2,n3;
  int sibling=0,degree=0,depth=0,height=0;
  int count=0;
  NodePointer roop;

  int countmax=0;
  NodePointer NIL;


  roop = malloc(sizeof(struct nod));


  NIL = malloc(sizeof(struct nod)); 
  NIL->node_number=-1;
  NIL->left=NULL;
  NIL->right=NULL;
  NIL->parent=NULL;
  NIL->height_check=0;
  
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    {  
      node[i]=malloc(sizeof(struct nod));
    }
  
  for(i=0;i<n;i++)
    {
      node[i]->node_number=-1;
      node[i]->left=NIL;
      node[i]->right=NIL;
      node[i]->parent=NIL;
      node[i]->height_check=0;
    }
  
  for(i=0; i<n ;i++)
    {
      scanf("%d",&n1);
      scanf("%d",&n2);
      scanf("%d",&n3);
      
      node[n1]->node_number=n1;
      
      if(n2!=-1)
	{
	  node[n1]->left=node[n2];
	  node[n2]->parent=node[n1];
	  node[n2]->node_number=n2;
	}
      else
	node[n1]->left=NIL;
      
      if(n3!=-1)
	{
	  node[n1]->right=node[n3];
	  node[n3]->parent=node[n1];
	  node[n3]->node_number=n3;
	}
      else
	node[n1]->right=NIL;
    }


  for(i=0;i<n;i++)
    {
      if(node[i]->parent->node_number==-1)
	{
	  node[i]->height_check=1;
	  k=i;
	}

      else if( node[i]->left==NIL &&node[i]->right==NIL)
	node[i]->height_check=3;
	
      else
	node[i]->height_check=2;

    }


  for(j=0;node[j]->parent->node_number!=-1;j++);

  printf("Preorder\n");
  visit(node[j]->node_number);
  printf("\n");

  printf("Inorder\n");
  visit2(node[j]->node_number);
  printf("\n");

  printf("Postorder\n");
  visit3(node[j]->node_number);
  printf("\n");
  return 0;
}



void visit(int k)
{
  printf(" %d",k);

  if(node[k]->left->node_number!=-1)
    {
      visit(node[k]->left->node_number);
    }
  if(node[k]->right->node_number!=-1)
    {
      visit(node[k]->right->node_number);
    }


}


void visit2(int k)
{
  if(node[k]->left->node_number!=-1)
    {
      visit2(node[k]->left->node_number);
    }

  printf(" %d",k);


  if(node[k]->right->node_number!=-1)
    {
      visit2(node[k]->right->node_number);
    }


}



void visit3(int k)
{
  if(node[k]->left->node_number!=-1)
    {
      visit3(node[k]->left->node_number);
    }
  if(node[k]->right->node_number!=-1)
    {
      visit3(node[k]->right->node_number);
    }
  printf(" %d",k);


}