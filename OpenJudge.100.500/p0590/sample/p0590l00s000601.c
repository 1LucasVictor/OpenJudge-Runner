#include<stdio.h>
int main(void)
{	
	int s[5];
	int k;
	int p=0;
	
	for(int i=0;i<5;i++)
	scanf("%d",&s[i]);
	scanf("%d",&k);
	
	for(int n=0;n<5;n++)
	{
		if(s[n]-s[n+1]<=k){
			p++;
		}
	}
	
	if(p==5)
	printf("Yay!");
	
	else
	printf(":(");
	

	return 0;
}
	
	