#include <stdio.h>
#define N 30

/*
How to test
% diff <(./a.out < b1in.txt) <(cat b1out.txt) 
$ ./a.out < ain.txt 2>erra.txt

  for( i=0 ; i < n ; i++){
    fprintf(stderr, "%d: C2[%d] = %c%c \n" ,__LINE__ ,i ,C2[i].suit ,C2[i].value );
  }
    fprintf(stderr, "%d:\n" ,__LINE__ );
*/
typedef enum{
  ROOT, INT, LEAF,
} t_e;

typedef struct{
  int left;
  int right;
  int pa;
} tree_t;

void prew(tree_t *t_p ,int id );
void inow(tree_t *t_p ,int id );
void posw(tree_t *t_p ,int id );

int main(){
  int    n, i, j, k;
  int    id;
  int    pid; // parent ID
  tree_t a[N]; // a[id]

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%d", &id );
    scanf("%d%d" ,&(a[id].left) ,&(a[id].right) );
  }

  // set parent, degree
  for( i=0 ; i<n ; i++){
    a[i].pa = -1;
  }

  // set  parent ID
  for( i=0 ; i<n ; i++ ){
    if( a[i].pa == -1 ){
      pid = i;
      break;
    }
  }
  for( i=0 ; i<n ; i++ ){
    if( a[i].left != -1 ){
      a[(a[i].left)].pa  = i;
    }
    if( a[i].right != -1 ){
      a[(a[i].right)].pa = i;
    }
  }


  printf("Preorder\n");
  prew(a, pid);
  printf("\n");

  printf("Inorder\n");
  inow(a, pid);
  printf("\n");

  printf("Postorder\n");
  posw(a, pid);
  printf("\n");

  
  return 0; // Don't forget return 0
}

void prew(tree_t *t_p ,int id){ // preorder tree walk
  if(id == -1){
    return;
  }

  printf(" %d" ,id);
  prew(t_p, t_p[id].left);
  prew(t_p, t_p[id].right);
}

void inow(tree_t *t_p ,int id){ // preorder tree walk
  if(id == -1){
    return;
  }

  inow(t_p, t_p[id].left);
  printf(" %d" ,id);
  inow(t_p, t_p[id].right);
}

void posw(tree_t *t_p ,int id){ // preorder tree walk
  if(id == -1){
    return;
  }

  posw(t_p, t_p[id].left);
  posw(t_p, t_p[id].right);
  printf(" %d" ,id);
}