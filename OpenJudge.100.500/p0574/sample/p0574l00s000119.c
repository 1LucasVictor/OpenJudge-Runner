#include<stdio.h>
int main()
{
  char A[1000];
  int i,k=0;
  scanf("%s",&A);
  for(i=1;i<=4;i++)
  {
    if(A[i]=A[i+1])
      k++;
  }
   if(k=0)
     printf("Good");
  else
    printf("Bad");
}