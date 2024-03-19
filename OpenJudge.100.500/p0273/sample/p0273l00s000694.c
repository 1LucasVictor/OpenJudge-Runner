#include <stdio.h>
#define FALSE -1
int A[44];

int fibona(int n)
{
  if(n==0 || n==1) return A[n]=1;
  if(A[n]!=FALSE) return A[n];
  return A[n]=fibona(n-1)+fibona(n-2);
}

int main()
{
  int i,num;
  for(i=0;i<44;i++)A[i]=-1;
  scanf("%d",&num);
  printf("%d\n",fibona(num));
	 return 0;
}