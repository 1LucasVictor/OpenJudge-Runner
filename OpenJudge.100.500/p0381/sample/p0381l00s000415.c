#include <stdio.h>

int main(){

  int i, j , k, n, x, ans, output;

  while(1){
    output = 1;
    scanf("%d %d", &n, &x);
    if( n == 0 && x == 0){
      break;
    }
  
    for( i = 1; i < n - 2 ; i++){
      for( j = i + 1; j < n - 1; j++){
        for ( k = j + 1; k < n  ; k++){
          ans = i + j + k;
          if ( x == ans ){
            output++;
          }
        }
      }
    }
    printf("%d\n",output);
  }

  return 0;
}