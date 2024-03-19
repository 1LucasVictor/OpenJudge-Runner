#include <stdio.h>

main(void)
{
	int a,b,c,d,e;
	while(scanf("%d %d",&a,&b)!=-1){
		d=a+b;
		for(c=0;d!=0;c++){
			d/=10;
		}
		printf("%d\n",c);
	}
	return 0;
}