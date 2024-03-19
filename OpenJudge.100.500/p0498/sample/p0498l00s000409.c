#include<stdio.h>
 
int main (void)
{
  int N;
  scanf("%d",&N);
   if(N % 2 == 0 && N<=100 && N>=0)
   {
     printf("%d",N/2);
   }
     else if(N % 2 == 1 && N<=100 && N>=0)
     {  printf("%d",(N/2)+1);
    
  }
  return 0;
}