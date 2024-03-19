#include <stdio.h>
#include <stdlib.h>

int main()
{   int H,N,i,A,sum=0;
scanf("%d",&H);
scanf("%d",&N);
for(i=0;i<N;i++)
{scanf("%d",&A);
sum=sum+A;
} 
if(sum<H)
 {

  printf("No\n");}
else
{

  printf("Yes\n");}
    return 0;
}