#include<stdio.h>
int main(void)
{
	int A,B,i,x,s;
	scanf("%d",&A);
	scanf("%d",&B);
	i = 1;
	for(s = 0;s <= B;s++)
	{
		s = s + A;
		if(s >= B)
		{
			break;
		}
		{
			i++;
		}
	}

	printf("%d\n",i);

return 0;
}