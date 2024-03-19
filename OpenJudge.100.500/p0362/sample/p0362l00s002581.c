#include<stdio.h>

int main (void)
{
	int input1,input2,input3;
	
	scanf("%d %d %d",&input1,&input2,&input3);
	if(input1 < input2 && input2 < input3)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
