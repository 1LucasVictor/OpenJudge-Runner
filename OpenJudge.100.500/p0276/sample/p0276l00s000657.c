#include<stdio.h>

int main(){
	
	int counter[105] = {0};
	int baris;
	int arr[105];
	int kolom;

	int t;
	
	for(int i=0;i<101;i++)
	{
		counter[i+1] = 0;
	}
	
	scanf("%d",&t);
		
	for(int j=0;j<t;j++)
	{
		scanf("%d %d", &baris, &kolom);
		for(int k=0;k<kolom;k++)
		{
			scanf("%d",&arr[k]);
			
			if(counter[arr[k]] == 0)
			{
				counter[arr[k]]+=1;
			}			
		}
		for(int l=0;l<t;l++)
		{
			if(l!=t-1)
			{
				if(counter[l+1] == 0)
				{
					printf("0 ");
				}
				else
				{
					printf("1 ");
				}
			}
			else //if()
			{
				if(counter[l+1] == 0)
				{
					printf("0\n");
				}
				else
				{
					printf("1\n");
				}
			}
		}
		for(int i=0;i<101;i++)
	{
		counter[i+1] = 0;
	}
	}	
	
//	for(int l=0;l<t;i++)
//	{
//		for(int m=0;m< t)
//	}
	
	
	
	
	
	return 0;
}
