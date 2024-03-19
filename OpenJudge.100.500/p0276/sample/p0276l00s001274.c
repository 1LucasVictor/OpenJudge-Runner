#include <stdio.h>
#define N 100
  
int main() {
  int i,j;
  int a,b,c,d;
  int array[N][N];
     
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
      array[i][j] = 0;
        }
    }
     
    scanf("%d",&a);
 
    for(i = 0; i < a; i++){
         
      scanf("%d",&d);
      scanf("%d",&c);
       
      for(j = 0; j < c; j++){
    scanf("%d", &b);
    array[i][b-1] = 1;
      }
    }
     
    for(i = 0; i < a; i++){
      for(j = 0 ; j < a - 1 ; j++){
     
    printf("%d", array[i][j]);
     
      }
       
        printf("%d\n", array[i][a-1]);
     
    }
     
    
     
}