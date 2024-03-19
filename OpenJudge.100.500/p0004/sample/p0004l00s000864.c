#include <stdio.h>
int main(void)
{
	int a,b,t,i,j;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		if(a < b){
				t = a;
				a = b;
				b = t;
			 }
		i = a;
		j = b;
		while(a != 0 && b != 0)
		{
			a = a % b;
			if(a == 0){
					printf("%d %d\n",b,i/b*j);
					break ;
			  	}
			b = b % a;
			if(b == 0){
					printf("%d %d\n",a,i/a*j);
					break ;
			  	}
		}
	}

	return 0;
}