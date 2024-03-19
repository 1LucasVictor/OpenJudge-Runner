
#include<stdio.h>
int main(void)
{
	int n,i;										
	 int a[100];									
	(n<100);
	
	scanf("%d",&n);							
	 for(i=0 ;i<5 ;i++)							
	 {
		 
		 scanf("%d",&a[i]);
		 ((0<=a[i])&&(a[i]<1000));
	 }
	for(i=i;i>0 ;i--)							
	{
		printf("%d",a[i-1]);
		if(!(i-1==0))
		{
			printf(" ");
		}
	}
	printf("\n"); 

	return 0;									
}