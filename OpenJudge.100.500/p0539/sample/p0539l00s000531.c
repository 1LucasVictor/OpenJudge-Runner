#include<stdio.h>
int main()
{
int n,i,j;
int a=0;
scanf("%d",&n);
for(i=1;i<10;i++)
  {
   for(j=1;j<10;j++)
      if(i*j==n)
      {
      	a=1;
      break;
      }
     }
if(a==0)
printf("No");
	else
	printf("Yes");     
return 0;
}