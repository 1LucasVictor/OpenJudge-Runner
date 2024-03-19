#include <stdio.h>
int main()
{
	int a,b,c,box;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		box=a;a=b;b=box;
	}
	if(a>c){
		box=a;a=c;c=box;
	}
	if(b>c){
		box=b;b=c;c=box;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}