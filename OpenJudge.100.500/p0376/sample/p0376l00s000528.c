// ITP1_6_A:   Reversing Numbers
// 2017.7.27

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
  int n,k,arr[101];
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&k);
    arr[i] = k;
  }
  for (int c = n-1; c >= 0; c--)
  {
    if(c > 0)printf("%d ",arr[c]);
    else
    {
      printf("%d",arr[c]);
    }
    
    
  }
  printf("\n");
	return 0;
  

}



