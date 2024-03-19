#include <stdio.h>

int hantei(int);

void main(void)
{
	int n,j=0,num;
	
	while(scanf("%d",&num)!=EOF)
	{
		for(n=1; n <= num; n++)
		{
			if(hantei(n)){
				//printf("%d\n",n);
				j++;
			}
		}
		printf("%d\n",j);
		j=0;
	}

}

int hantei(int n)
{
	int i;
	if(n == 2) return 1;
	if(n < 2 || n%2 == 0) return 0;
	
	for(i = 3; i*i<= n; i += 2){
		if(n%i == 0) return 0;
	}
	
	return 1; 
}