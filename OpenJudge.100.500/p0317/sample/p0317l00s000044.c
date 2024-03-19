#include<stdio.h>
#include<string.h>

#define NIL -1
#define MAX 500000

struct node{
  int parent;
  int left;
  int right;
  int key;
};
typedef struct node Node;

void insert(int);
void inorder(int);
void preorder(int);
int find(int,int);

int  root=-1;
Node T[MAX];

int main(){
  int i, n, m;
  char str[10];

  scanf("%d",&n);

  for(i=0;i<n;i++) T[i].left=T[i].right=T[i].parent=-1;

  for (i=0;i<n;i++){
    scanf("%s",str);
    if(strcmp(str,"insert")==0){
      scanf("%d",&T[i].key);
      insert(i);
    }
    else if(strcmp(str,"print")==0){
      inorder(0);
      printf("\n");
      preorder(0);
      printf("\n");
    }
    else if(strcmp(str,"find")==0){
      scanf("%d",&m);
      if(find(root,m)!=-1) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

void insert(int z){//printf("in\n" );
  int y = -1;
  int x = root;

  while(x != -1){
    y = x;
    if(T[z].key < T[x].key) x = T[x].left;
    else x = T[x].right;
  }

  T[z].parent = y;

  if(y == -1) root = z;

  else if(T[z].key < T[y].key) T[y].left = z;

  else T[y].right = z;
}

void inorder(int t){
  if(t != -1){
    inorder(T[t].left);
    printf(" %d",T[t].key);
    inorder(T[t].right);
  }
}

void preorder(int t){
  if(t != -1){
    printf(" %d",T[t].key);
    preorder(T[t].left);
    preorder(T[t].right);
  }
}

int find(int x, int k){
  if(x==-1 || k==T[x].key) return x;
  if(k<T[x].key) return find(T[x].left,k);
  else return find(T[x].right,k);
}