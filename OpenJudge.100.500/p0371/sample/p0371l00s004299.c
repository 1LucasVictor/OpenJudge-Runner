#include	<stdio.h>
int	main(void)
{
	int n,i,ai,min,max,sum;
	sum=0;
	min=1000000;
	max=-1000000;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	 scanf("%d",&ai);
	 sum+=ai;
	 if(min>ai){
	  min=ai;
	 }
	 if(max<ai){
	 max=ai;
 	 }
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}