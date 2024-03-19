#include<stdio.h>
int main()
{
	int k,a,b,x,z;
	scanf("%d %d %d",&k,&a,&b);
	x=1;
	z=0;
	while(1){
		if(z>=a) break;
		z=k*x;
		x++;
	}
	if(z>=a&&z<=b) printf("OK\n");
	else printf("NG\n");
	return 0;
}
