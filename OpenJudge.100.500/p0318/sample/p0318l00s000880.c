
#include<stdio.h> 
#include<stdlib.h> 
 
typedef struct gihu_n_8_de{ 
  struct gihu_n_8_de *right; 
  struct gihu_n_8_de *left; 
  struct gihu_n_8_de *parent; 
  int key; 
}*Node; 

#define NIL NULL 
 
Node root; 
int asdfijejif =0; 
int asdfijejif2 = 0;

Node t_8_M(Node );
Node Search(Node , int );
Node treeSuccessor(Node );
void treeDelete(Node );
void inorder(Node );
void preorder(Node );
void insert(int );

  
int main(){ 
  int n, i, x; 
  char com[20]; 
  scanf("%d", &n); 
  for ( i = 0; i < n; i++ ){ 
    scanf("%s", com); 
    if ( com[0] == 'f' ){ 
      scanf("%d", &x); 
      Node t = Search(root, x); 
      if ( t != NIL ){ 
        printf("yes\n");  
        
      } 
      else { 
        printf("no\n"); 
        
      } 
    } 
    else if ( com[0] == 'i' ){ 
      scanf("%d", &x); 
      insert(x); 
    }  
    
    
    else if ( com[0] == 'p' ){ 
      
      inorder(root); 
      printf("\n"); 
      preorder(root); 
      printf("\n"); 
      asdfijejif = 0; 
      
    } 
    else if ( com[0] == 'd' ){ 
      scanf("%d", &x); 
      treeDelete(Search(root, x)); 
    } 
  } 
  
  return 0; 
} 



Node t_8_M(Node x){ 
  while (x->left != NIL){ 
    x = x->left; 
  } 
  return x; 
} 

 

Node Search(Node u, int k){ 
  while(u !=NIL && k !=u->key){ 
    if(k < u->key){ 
      u = u->left; 
      
    } 
    
    else u = u->right; 
  } 
  return u; 
  
} 



Node treeSuccessor(Node x){ 
  Node y; 
  if(x->right != NIL){ 
    return t_8_M(x->right); 
  } 
  y = x->parent; 
  
  while(y != NIL && x == y->right){ 
    x = y; 
    y = y->parent; 
  } 
  return y; 
} 

void treeDelete(Node z){ 
  Node y;  
  Node x; 
  
  if(z->left == NIL || z->right == NIL){ 
    y = z; 
  } 
  else { 
    y = treeSuccessor(z); 
  } 
  
  if(y->left != NIL){ 
    x = y->left; 
  }  
  else { 
    x = y->right; 
  } 
  
  if(x != NIL){ 
    x->parent = y->parent; 
  } 
  if(y->parent == NIL){ 
    root = x; 
  } 
  else if(y == y-> parent ->left){ 
    y->parent->left =x; 
  } 
  else y-> parent -> right = x; 
  
   
  if(y != z){ 
    z->key = y->key; 
  }  
  
} 

void insert(int k){ 
  Node y = NIL; 
  Node x = root; 
  Node z; 
  
  z = malloc(sizeof(struct gihu_n_8_de)); 
  z->key = k; 
  z->left = NIL; 
  z->right = NIL; 
 
  while(x != NIL){ 
    y = x; 
    if(z->key < x->key){ 
      x = x->left; 
    } 
    else x = x->right;  
  } 
  z->parent = y; 
 
  if(y == NIL){ 
    root = z; 
  } 
  else if (z->key < y->key){ 
    y->left = z; 
  } 
  
  else y->right = z; 
} 

void inorder(Node u){ 
  if(u != NIL){ 
    inorder(u->left); 
    printf(" "); 
    printf("%d",u->key); 
    inorder(u->right); 
  } 
  
} 
 
 
 
 
void preorder(Node u){ 
  
  
  if (u != NIL) { 
    printf(" "); 
    printf("%d",u->key);  
    preorder(u->left); 
      preorder(u->right); 
      
      
      
  } 
} 

