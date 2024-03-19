#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,k;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	d=a-k;
	e=k-(a+b);
	if(k<a||k<a+b){
		printf("%d\n",a);
		printf("ba\n");
	}
	else {
		f=a-e;
		printf("%d\n",f);
	}
	return 0;
}