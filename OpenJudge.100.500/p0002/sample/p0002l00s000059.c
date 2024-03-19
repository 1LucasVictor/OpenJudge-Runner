#include <stdio.h>

int main(void){
  
  int N;
  scanf("%d", &N);
  
  int i;
  int A[N];
  int B[N];
  int C[N];
  char ans[N][4];
  
  for( i = 0; i < N; i++ ){
    
    ans[i][0] = 'N';
    ans[i][1] = 'O';
    ans[i][2] = '\0';
    ans[i][3] = '\0';
    
    scanf("%d %d %d", A+i, B+i, C+i );
    
    if( A[i]*A[i] == (B[i]*B[i] + C[i]*C[i]) ){
      ans[i][0] = 'Y';
      ans[i][1] = 'E';
      ans[i][2] = 'S';
    }
    
    if( B[i]*B[i] == (A[i]*A[i] + C[i]*C[i]) ){
      ans[i][0] = 'Y';
      ans[i][1] = 'E';
      ans[i][2] = 'S';
    }
    
    if( C[i]*C[i] == (A[i]*A[i] + B[i]*B[i]) ){
    ans[i][0] = 'Y';
    ans[i][1] = 'E';
    ans[i][2] = 'S';
    }
    
  }
  
  for( i = 0; i < N; i++ ){
    printf("%s\n", ans[i]);
  }
    
  return 0;
}