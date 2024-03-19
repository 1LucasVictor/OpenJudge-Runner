#include	<stdio.h>
int	main(void)
{
	int a,b,c;
	int n=0;

	scanf("%d %d %d",&a,&b,&c);
	
	while(a<=b){
		if(c%a==0){
			n++;
		}
		a++;
	}
	printf("%d\n",n);


	return	0;
}