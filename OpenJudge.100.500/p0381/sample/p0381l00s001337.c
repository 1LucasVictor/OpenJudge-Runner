#include <stdio.h>

int main()
{
 int i,j,k;
 int N,X,dem,tong;
 scanf("%d %d",&N,&X);
 for (i = 1; i <= N-2; i++)
 for (j = i+1; j <= N-1; j++)
 for (k = j+1; k <= N; k++)
  if(i+j+k == X) dem++;
 printf("%d\n", dem); 
return (0);
}