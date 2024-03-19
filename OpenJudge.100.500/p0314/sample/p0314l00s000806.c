#include <stdio.h>
#include <stdlib.h>

#define N 100000
#define NIL -1

typedef struct t{
  int id;
  int parent;
  int degree;
  int depth;
  int child[2];
  int sibling;
  int height;
}Tree;

void depthcalculation(int, int);
void heightcalculation(int);
void Preorder(int);
void Inorder(int);
void Postorder(int);

Tree T[N];
int maxdepth = 0;

int main(){
  int treenum, i, id, j;
  
  scanf("%d", &treenum);
  
  //preparation
  for(i = 0; i < treenum; i++){
    T[i].parent = NIL;
    T[i].depth = 0;
    T[i].sibling = -1;
    T[i].height = 0;
    T[i].degree = 0;
  }
  
  //input
  for(i = 0; i < treenum; i++){
    scanf("%d", &id);
    T[id].id = id;
    
    for(j = 0; j < 2; j++){
      
      scanf("%d", &T[id].child[j]);
      
      if(T[id].child[j] != NIL){
	T[ T[id].child[j] ].parent = T[id].id;
	T[id].degree++;
      }
      
    }
   
      T[ T[id].child[0] ].sibling = T[id].child[1];
      T[ T[id].child[1] ].sibling = T[id].child[0];
    
  }
  
  //root search
  for(i = 0; i < treenum; i++){
    if(T[i].parent == NIL){
      break;
    }
  }
  
  depthcalculation(i, 0);
  heightcalculation(treenum);
  T[i].height = maxdepth;
  
  //output
  printf("Preorder\n");
  Preorder(i);
  printf("\n");
  printf("Inorder\n");
  Inorder(i);
  printf("\n");
  printf("Postorder\n");
  Postorder(i);
  printf("\n");
  
  return 0;
}

void depthcalculation(int t, int d){
  int i;

  T[t].depth = d;
  
  if(maxdepth < d){
    maxdepth = d;
  }
  
  for(i = 0; i < 2; i++){
    if(T[t].child[i] != NIL){
    depthcalculation(T[t].child[i], d+1);
    }
  }
  
}

void heightcalculation(int treenum){
  int i, h, id;

  for(i = 0; i < treenum; i++){
    if(T[i].degree == 0){
      h = 0;
      id = T[i].id;
      T[i].height = 0;
      
      while(1){
	id = T[id].parent;
	if(id == NIL){
	  break;
	}
	h++;

	if(T[id].height < h){
	  T[id].height = h;
	}
      }
      
    }
  }
}

void Preorder(int t){
    printf(" %d", T[t].id);
    if(T[t].child[0] != NIL){
      Preorder(T[t].child[0]);
    }
    if(T[t].child[1] != NIL){
      Preorder(T[t].child[1]);
    }
}

void Inorder(int t){

  if(T[t].child[0] != NIL){
    Inorder(T[t].child[0]);
  }
  printf(" %d", T[t].id);
  if(T[t].child[1] != NIL){
    Inorder(T[t].child[1]);
  }
}
void Postorder(int t){

  if(T[t].child[0] != NIL){
    Postorder(T[t].child[0]);
  }
  if(T[t].child[1] != NIL){
    Postorder(T[t].child[1]);
  }
  printf(" %d", T[t].id);
}

