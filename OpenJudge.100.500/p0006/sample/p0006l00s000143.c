#include <stdio.h>
int main(void)
{
	int a,c,i,shakkin;
	shakkin = 100000;
	scanf("%d",&a);
	for(i = 0;i < a;i++)
	{
		c = (shakkin*105/100) % 1000;
		if(c == 0)
		{
			shakkin = shakkin*105/100;
		}else{
			shakkin = ((int)(shakkin*105/100/1000) + 1)*1000;
		     }
	}

	printf("%d\n",shakkin);

	return 0;
}