#include<stdio.h>
int main()
 {
  char A[1000];
int i,j,k;
scanf("%s",&A);
  for(j=0;j<=2;j++)
  {
for(i=-1;i<=3;i++)
{
  if(A[j]==A[i+1])
    k++;
}
  }
if(k==0)
 printf("No");
else
  printf("Yes");
}