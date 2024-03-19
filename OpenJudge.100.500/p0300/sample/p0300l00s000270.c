#include <stdio.h>

int main()
{
  int i, j, n, q;
  int S[100], T[100], C=0; 

  scanf("%d",&n);

  for( i = 0 ; i < n ; i++ ) scanf("%d", &S[i]);
  
  scanf("%d",&q);
  
  for( i = 0 ; i < q ; i++ ) scanf("%d", &T[i]);
  
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < q ; j++ ){
      if( S[i] == T[j] ) C++;
    }
  }
  if( C == 0 ) printf("Not Found!\n");
  
  printf("%d\n", C);
  
  return 0;
}