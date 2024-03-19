#include <stdio.h>
#define N 44

int main()
{
  int i,n,data[N];

  scanf("%d",&n);
  
  data[0] = 1;
  data[1] = 1;

  for(i=2; i<N; i++)
    data[i] = data[i-1] + data[i-2];

  printf("%d\n",data[n]);
}

