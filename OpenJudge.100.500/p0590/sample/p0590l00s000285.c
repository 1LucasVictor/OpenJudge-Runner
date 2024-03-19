#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	int s[5];
	int k;
	int p=0;
	
	for(int i=0;i<5;i++)
		scanf("%d",&s[i]);
	scanf("%d",&k);
	
	for(int i=0;i<4;i++)
	{
		for(int n=1;n+i<5;n++)
		{	
			if(abs(s[i]-s[n+i])<=k){
				
				p++;
		}
		
	}
	
	}
	
	if(p==10)
	printf("Yay!");
	
	else
	printf(":(");
	

	return 0;
}
	
	