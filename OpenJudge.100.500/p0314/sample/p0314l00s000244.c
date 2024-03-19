/* C Tree Walk */

#include<stdio.h>

int T[26][4];/*T[n][0]=P, T[n][1]=L(left child), T[n][2]=R(right child), T[n][3]=id*/
int n;

void Preoder(int u[]);
void Inorder(int u[]);
void Postorder(int u[]);

int main(){
  int i, j;
  int id, l, r;
  int rootid;


  scanf("%d",&n); 

  /* initialize T[n][3]*/
  for(i=0;i<n;i++){
    for(j=0;j<3;j++){
      T[i][j]=-1;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&l,&r);
    T[id][3]=id;
    T[id][1]=l;
    T[id][2]=r;
    T[l][0]=id;
    T[r][0]=id;
  }
  
  for(i=0;i<n;i++){
    if(T[i][0]==-1){
      rootid=i;
      break;
    }
  }

  printf("Preorder\n");
  Preoder(&T[rootid][0]);
  printf("\n");
 
  printf("Inorder\n");
  Inorder(&T[rootid][0]);
  printf("\n");

  printf("Postorder\n");
  Postorder(&T[rootid][0]);
  printf("\n");
  return 0;
}

void Preoder(int u[4]){
  printf(" %d",u[3]);
  if(T[u[3]][1]!=-1)Preoder(T[u[1]]);
  if(T[u[3]][2]!=-1)Preoder(T[u[2]]);
}

void Inorder(int u[4]){
  if(T[u[3]][1]!=-1)Inorder(T[u[1]]);
  printf(" %d",u[3]);
  if(T[u[3]][2]!=-1)Inorder(T[u[2]]);
}

void Postorder(int u[4]){
  if(T[u[3]][1]!=-1)Postorder(T[u[1]]);
  if(T[u[3]][2]!=-1)Postorder(T[u[2]]);
  printf(" %d",u[3]);
}


  
  
  