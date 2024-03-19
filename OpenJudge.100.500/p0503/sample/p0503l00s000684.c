#include <stdio.h>
#include <stdlib.h>

int ordena(const void *a, const void *b){
  return (*(int *)a)- (*(int *)b);
}

int main (){               //pairwise distinct significa que todos os elementos são únicos.
  int n,b;
  int a[212345];

  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

  qsort(a,n,sizeof(int), ordena);

  for(int i=0; i<n; i++){
    if (a[i]==a[i+1]){
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");

  return 0;
}
