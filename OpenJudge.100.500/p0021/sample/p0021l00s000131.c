#include <stdio.h>

int main()
{
  int n, i, j;
  int a[5000] = {};
  int s[5000] = {};
  int p;
  int ans = -10000;

  for(;;)
    {
      int a[5000] = {};
      int s[5000] = {};
      int p;
      int ans = -10000;

      scanf("%d", &n);
      if(n == 0)
	break;

      for(i = 0; i < n; i++)
	scanf("%d", &a[i]);

      s[0] = a[0];
      for(i = 1; i < n; i++)
	{
	  for(j = 0; j <= i; j++)
	    s[i] += a[j];

	  if(ans < s[i])
	    {
	      ans = s[i];
	      p = i;
	    }
	}

      for(i = 0; i < 5000; i++)
	s[i] = 0;


      s[p] = a[p];
      for(i = p - 1; i >= 0; i--)
	{
	  for(j = p; j >= i; j--)
	    s[i] += a[j];
	  if(ans < s[i])
	      ans = s[i];
	}
      printf("%d\n", ans);
    }
  
  return 0;
  
}