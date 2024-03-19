#include<stdio.h>
int main()
{
  int i,j;
  char c[21];
  for(i=0;;i++)
    {
      scanf("%c",&c[i]);
      if(c[i]=='\n') break;
    }
  for(j=i-1;j>=0;j--) printf("%c",c[j]);
  printf("\n");
  return 0;
}