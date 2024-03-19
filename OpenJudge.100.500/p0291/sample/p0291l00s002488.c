#include<stdio.h>
int main()
{
  int sp[200000], mxp = 0, msf = 0, i, n, j, d;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%d", &sp[i]);
    }
  msf = sp[0];
  for(j = 1; j < n-1; j++)
    {
      d = sp[j] - msf;
      if(d > mxp) mxp = d;
      if(sp[j] < msf) msf = sp[j];
    }
  printf("%d\n", mxp);
}

