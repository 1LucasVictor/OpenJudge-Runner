#include <stdio.h>

int main()
{
	int d=100000,n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		d*=1.05;
	}
	d=(int)d;
	if(d%10000!=0){
		d = d - d%10000 +10000;
	}
	
	printf("%d\n",d);
	return 0;
}