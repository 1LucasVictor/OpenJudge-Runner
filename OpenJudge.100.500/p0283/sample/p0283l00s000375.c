#include <stdio.h>
 
#define N 8
  
 void print(void);
 void backtrack(int);
  
 int a[N][N] = {{}};
 int row[N] = {};
 int l[15] = {};
 int r[15] = {};
 int s[N] = {};
  
 void backtrack(int i){
   int j;
  
   if(i == N){
     print();
     return;
   }
  
   for(j = 0;j < N;j++){
     if(s[j] == 1 || l[i + j] == 1 || r[i - j + N - 1] == 1) continue;
  
     row[i] = j;
     l[i + j] = r[i - j + N - 1] = s[j] = 1;
  
     backtrack(i + 1);
  
     row[i] = s[j] = l[i + j] = r[i - j + N - 1] = 0;
  
   }
  
 }

int main(){
 
 
  int i,j,r,c,k;
 
 
  scanf("%d",&k);
 
  for(i = 0;i < k;i++){
    scanf("%d%d",&r,&c);
    a[r][c] = 1;
  }
  backtrack(0);
 
  return 0;
}
 

 
void print(){
 
  int i,j;
 
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(a[i][j] == 1){
        if(row[i] != j) {
          return;
        }
      }
    }
  }
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
 
}