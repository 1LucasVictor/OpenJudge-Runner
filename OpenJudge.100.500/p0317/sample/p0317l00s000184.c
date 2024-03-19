#include <stdio.h>
#include <string.h>

#define Max 500000
#define R -1
#define s1 "insert"
#define s2 "print"

typedef struct{
  int parent;
  int left;
  int right;
  int key;
}Node;

Node T[Max];
int root=-1;

void insert(int cnt){
  int x=root;
  int y=R;

  while(x!=R){
    y=x;
    if(T[cnt].key< T[x].key){
      x=T[x].left;
    }else{
      x=T[x].right;
    }
  }
  T[cnt].parent=y;

  if(y==R){
    root=cnt;
  }else if(T[cnt].key < T[y].key){
    T[y].left=cnt;
  }else{
    T[y].right=cnt;
  }
}
void order1(int q){
  if(q==R) return;
  order1(T[q].left);
  printf(" %d",T[q].key);
  order1(T[q].right);
}

void order2(int q){
  if(q == R) return;
  printf(" %d",T[q].key);
  order2(T[q].left);
  order2(T[q].right);
}

int find(int q){
  int k=root;
  while(k!=R && q!=T[k].key){
    if(q<T[k].key) k=T[k].left;
    else k=T[k].right;
  }
  return k;
}



int main(int argc, char const *argv[]) {
  int n,i,x;
  char s[7];

  scanf("%d",&n);
  for (i = 0; i < n; i++) T[i].right=T[i].left=T[i].parent=R;

  for (i = 0; i < n; i++) {
    scanf("%s",s);
    if(strcmp(s,"find")==0){
      scanf("%d",&x);
      if(find(x)==R){
        printf("no\n");
      }else{
        printf("yes\n");
      }
    }else if(strcmp(s,"insert")==0){
      scanf("%d",&T[i].key);
      insert(i);
    }else if(strcmp(s,"print")==0){
      order1(0);
      printf("\n");
      order2(0);
      printf("\n");
    }
  }
  return 0;
}