#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int n = 0;
  int ary[200005];
  int jud = 0;
  
  scanf("%d",&n);
  
  for(int i = 0;i < n;i++)
  {
    scanf("%d",&ary[i]);
  }
  
  qsort(ary, n, sizeof(int), sort);
  
  for(int i = 0;i < (n-1);i++)
  {
    if(ary[i] == ary[i+1])
    {
      jud++;
    }
  }
  if(jud == 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
    return 0;
}
