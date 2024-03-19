#include <stdio.h>
#include <string.h>
    
#define Max 500000
    
void insert(int); 
void find(int, int);
int successor(int);
void delete(int);
void Preorder(int);  
void Inorder(int);  
    
    
typedef struct{
  int key;
  int p;
  int h[2];
} Node;
    
Node D[Max];
    
int main(){
  int i, n, v;
  char s[7];
    
  scanf("%d", &n);
    
  D[0].key = -1;
    
     
  for(i = 0; i < n; i++){
    D[i].h[0] = -1;
    D[i].h[1] = -1;
    
    scanf("%s", s);
    
    if(strcmp(s, "insert") == 0){
      scanf("%d", &D[i].key);
      insert(i);
    }
    else if(strcmp(s, "print") == 0){
      Inorder(0);
      printf("\n");
      Preorder(0);
      printf("\n");
    }
    else if(strcmp(s, "find") == 0){
      scanf("%d", &v);
      find(0, v);
    }
    else if(strcmp(s, "delete") == 0){
      scanf("%d", &v);
      delete(v);
    }
  }
      
  return 0;
}
    
    
void insert(int z){
  int x, y;
    
  y = -1;
  x = 0;
    
  if(z != 0){
    while(x != -1){
      y = x;
      if(D[z].key < D[x].key) x = D[x].h[0];
      else x = D[x].h[1];
    }
  }
    
  D[z].p = y;
    
  if(y != -1){
    if(D[z].key < D[y].key) D[y].h[0] = z;
    else D[y].h[1] = z;
  }
}
    
void find(int x, int k){
    
  if(x == -1) printf("no\n");
  else if(D[x].key == k) printf("yes\n");
  else if(k < D[x].key) find(D[x].h[0], k);
  else find(D[x].h[1], k);
}
    
int successor(int x){
  int y;
    
  if(D[x].h[1] != -1){
    x = D[x].h[1];
    while(D[x].h[0] != -1) x = D[x].h[0];
    return x;
  }
      
  else {
    y = D[x].p;
    while(y != -1 && x == D[y].h[1]){
      x = y;
      y = D[y].p;
    }
    return y;
  }
}
    
void delete(k){
  int x, y, z = 0;
    
  while(1){
    if(D[z].key == k) break;
    else if(k < D[z].key) z = D[z].h[0];
    else z = D[z].h[1];
  }
    
  if(D[z].h[0] == -1 || D[z].h[1] == -1) y = z;
  else y = successor(z);
    
  if(D[y].h[0] != -1) x = D[y].h[0];
  else x = D[y].h[1];
    
  if(x != -1) D[x].p = D[y].p;
    
  if(D[y].p != -1){
    if(y == D[D[y].p].h[0]) D[D[y].p].h[0] = x;
    else D[D[y].p].h[1] = x;
  }
    
  if(y !=  z) D[z].key = D[y].key;
    
}
    
    
void Preorder(int a){
  printf(" %d", D[a].key);
    
  if(D[a].h[0] != -1) Preorder(D[a].h[0]);
  if(D[a].h[1] != -1) Preorder(D[a].h[1]);
}
    
    
void Inorder(int a){
  if(D[a].h[0] == -1){
    printf(" %d", D[a].key);
    if(D[a].h[1] != -1) Inorder(D[a].h[1]);
  }
  else{
    Inorder(D[a].h[0]);
    printf(" %d", D[a].key);
    if(D[a].h[1] != -1) Inorder(D[a].h[1]);
  }
}

