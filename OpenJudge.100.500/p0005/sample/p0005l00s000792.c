#include <stdio.h>
#include <string.h>

int reverse(char *a)
{
  int n, i;
  char rev[20] = "";
  n = strlen(a);
  for(i=0;i<n;i++)
    {
      rev[i] = a[n-i-1];
    }
  printf("%s\n", rev);
  return 0;
}

int main()
{
  char in[20];
  scanf("%s", in);
  reverse(in);
  return 0;
}