#include<stdio.h>
#include<stdlib.h>
 
#define NIL NULL/*ポインタに入れる番兵なのでNULL*/
struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
};
 
typedef struct node * Node;
 
void insert(Node,int);
Node Find(Node,int);
void PrintInorder(Node );
void PrintPreorder(Node );
Node Delete(Node,Node);
Node Successor(Node);
Node Minimum(Node);

Node root,newnode;
main()
{
  int number,k,i;
  char str[20];
   
  scanf("%d",&number);
  root = malloc(sizeof(struct node));
  for(i=0;i<number;i++)
    {
      scanf("%s",str);
      if(str[0]=='i')
    {
      scanf("%d",&k);
      if(i !=0) {
         
        insert(root,k);
      }                  /*挿入ごとにrootを入れる*/
      else root->key = k;
      
       
    }
      else if(str[0] == 'p'){
	PrintInorder(root);
	printf("\n");
	PrintPreorder(root);
	printf("\n");
    }  
      else if(str[0] == 'f')
	{
	  scanf("%d",&k);
	  if(Find(root,k)==NIL)printf("no\n");
	  else printf("yes\n");
	}

      else if(str[0] == 'd')
	{
	  scanf("%d",&k);
	  Delete(root,Find(root,k));

	}
    }
return 0;
}
 
void insert(Node t,int k)
{
  Node y,x,z;
  /*zを実態化させて*/
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = z->right = NIL;
  
   
 
  y = NIL;/*yはxの親とする*/
  x = t;/*T=root*/
   
  while(1)
    {
      y = x;/*子を親にする*/
       
      if(z->key < x->key) x = x->left;
      else x = x->right;
       
      if(x == NIL)break;
    }
 
   z->parent = y;
   if(y == NIL)t = z;/*??????????¨???????????????¨??§??????root?????£??\??§?????????*/
 
   else if(z->key < y->key) y->left = z;
   else y->right = z;
 
 
}
 
void PrintInorder(Node T)
{
  if(T != NIL){
     PrintInorder(T->left);
   
   
  printf(" %d",T->key);
  
  
   PrintInorder(T->right);
  }
  else return;
   
}
 
void PrintPreorder(Node T)
{
  if(T != NIL){
    printf(" %d",T->key);
 
    PrintPreorder(T->left);
    PrintPreorder(T->right);
 
  }
  else return ;
  
}
 
 
Node Find(Node T,int k)
{
  if(T == NIL || k == T->key)return T;
  if(k < T->key)return Find(T->left,k);
  else return Find(T->right,k);
 
}

Node Delete(Node T, Node z)
{
  Node x,y; 

  if(z->left == NIL || z->right == NIL)y = z; /*ここが case1 とcase2 */
  else y = Successor(z);

  if(y->left != NIL )x = y->left;
  else x = y->right;

  if(x != NIL) x->parent = y->parent;
  
  if(y->parent == NIL)T = x;   /*Tとはrootのこと*/
  else if( y == y->parent->left ) y->parent->left = x;
  else y->parent->right = x;
 
  if(y != z)
      z->key = y->key;

  return y;

}

Node Successor(Node x)
{
  Node y;

  if(x->right != NIL)return Minimum(x->right);
  
  y = x->parent;

  while( y != NIL && x == y->right)
    {
      x = y;
      y = y->parent;
    }

  return y;
    
}

Node Minimum(Node x)
{
  while (x->left != NIL)
    {
      x = x->left;
    }
  return x;

}