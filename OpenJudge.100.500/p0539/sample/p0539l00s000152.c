#include<stdio.h>
int main()
{
 int i,j,N,a=0;
 scanf("%d",&N);
 for(i=1;i<=9;i++)
 {
	 for(j=1;j<=9;j++)
	 {
		 if(i*j==N)
			 a++;
	 }
 }
  
 if(a>0)
	 printf("Yes\n");
 else
	 printf("No\n");

	return 0;}
