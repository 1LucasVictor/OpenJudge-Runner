#include<stdio.h>
int main(void)
{
	int e[100],a,b,c;
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d",&e[b]);
	}
	for(a=a-1;a>0;a--){
		printf("%d ",e[a]);
	}
	printf("%d\n",e[0]);
	return 0;
}