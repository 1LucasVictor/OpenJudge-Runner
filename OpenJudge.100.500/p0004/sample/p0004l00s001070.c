#include<stdio.h>

int main(void)
{
	int num[2],koyak,escape;
	
	long long int i;
	
	long long int kobai;
	
	while(scanf("%d %d",&num[0],&num[1]) != EOF )
	{
		kobai = 0;
		koyak = 0;
		
		if(num[0] < num[1])
		{
			escape = num[0];
			num[0] = num[1];
			num[1] = escape;
		}
		
		for(i = num[1] / 2 ; i > 0 ; i--)
		{
			if(0 == num[0] % i && 0 == num[1] % i)
			{
				koyak = i;
				break;
			}
		}
		
		for(i = 1;; i++)
		{
			
			
			if(0 ==( num[0] * i ) %  num[1])
			{
				kobai = num[0] * i;
				break;
			}
		
		}
		
		
		
		
		
		printf("%d %lld\n",koyak,kobai);
		
	}
	
	return 0;
}