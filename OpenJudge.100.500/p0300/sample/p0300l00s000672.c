#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, q, i, j, k = 0;
  int *S, *T;

  scanf("%d", &n);
  S = (int *)malloc(n * sizeof(int));
  for(i = 0; i < n; i++)
    scanf("%d", &S[i]);

  scanf("%d", &q);
  T = (int *)malloc(q * sizeof(int));
  for(i = 0; i < q; i++)
    scanf("%d", &T[i]);

  /* printf??§??????????¢????
     printf("\nn = %d\n", n);
     for(i = 0; i < n; i++)
     printf("%d ", S[i]);
     printf("\n");

     printf("q = %d\n", q);
     for(i = 0; i < q; i++)
     printf("%d ", T[i]);
     printf("\n");
  */


  for(i = 0; i < n; i++){
    for(j = 0; j < q; j++){

      if(S[i] == T[j]) k++;

    }
  }

  printf("%d\n", k);








  return 0;
}