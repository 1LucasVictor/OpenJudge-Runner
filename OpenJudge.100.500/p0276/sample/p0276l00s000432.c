#include <stdio.h>
#define MAX 101

int main(){
  int i,j,n;
  int k,l;
  int M[MAX][MAX];
  int id;
  scanf("%d",&n);
  for(i=0;i<n+1;i++){
    for(j=0;j<n+1;j++){
    M[i][j] = 0;
      }
  }
  
  for(i=1;i<n+1;i++){
    scanf("%d",&id);
    scanf("%d",&k);
    for(j=1;j<k+1;j++){
    scanf("%d",&l);
    M[i][l] = 1;
    }
  }
 
  for(i=1;i<n+1;i++){
    for(j=1;j<n;j++){
      printf("%d ",M[i][j]);
      }
    printf("%d\n",M[i][j]);
  }  
  
}

