#include<stdio.h>
int main()
 {
  char A[1000];
int i,j;
scanf("%s",&A);
for(i=0;i<=2;i++)
{
  if(A[i]==A[i+1])
    j++;
}
if(j==0)
 printf("No");
else
  printf("Yes");
}