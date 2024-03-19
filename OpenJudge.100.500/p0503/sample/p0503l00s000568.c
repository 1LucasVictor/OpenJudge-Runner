#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    if(*(int*)a > *(int*)b)
      return 1;
    else if(*(int*)a < *(int*)b)
      return -1;
    else
      return 0;
}

int main()
{
  int N,i;
  int *a;

  scanf("%d", &N);
  a = calloc(N,sizeof(int));

  for(i=0; i<N; i++)
    scanf("%d",&a[i]);

  qsort(a, N, sizeof(int), cmp);

  for(i=0; i<N-1; i++){
    if(a[i] == a[i+1])
    {
      printf("NO"); return 0;
    }
  }
  printf("YES");
  return 0;
}
