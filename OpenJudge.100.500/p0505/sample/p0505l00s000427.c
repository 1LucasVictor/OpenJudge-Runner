#include <stdio.h>

int main(void)
{
	int mhp;
	int num;
	int i;
	int atk;
	
	scanf("%d%d", &mhp, &num);
	
	for(i = 0; i < num; i++)
	{
		scanf("%d", &atk);
		mhp -= atk;
		
	}
	
	if(mhp < 0)
	{
		printf("Yes");
	}else
	{
		printf("No");
	}
	
}