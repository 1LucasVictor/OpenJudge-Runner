#include<stdio.h>
int main()
 {
  char A[1000];
int i,j,k;
scanf("%s",&A);
  for(j=0;j<=3;j++)
  {
for(i=0;i<=3;i++)
{
	if(i!=j)
	{
	
  if(A[j]==A[i])
    k++;
}
}
}
if(k==0)
 printf("No");
else
  printf("Yes");
}