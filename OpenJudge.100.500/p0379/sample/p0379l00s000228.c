#include <stdio.h>

int A[100][100];
int b[100], c[100];

int main(){
  int n,m,a,i,j;
  scanf("%d%d", &n, &m);
  
  for(i=0; i<n; i++)//scan array A
    for(j=0; j<m; j++){
      scanf("%d", &a);
      A[i][j] = a;
    }
  for(j=0; j<m; j++){//scan array b
    scanf("%d", &a);
    b[j] = a;
  }
  for(i=0; i<n; i++)//cal the multiplication
    for(j=0; j<m; j++)
      c[i] += A[i][j] * b[j]; 
    
  for(i=0; i<n; i++)//print the answer
    printf("%d\n", c[i]);
  
  return 0;
}