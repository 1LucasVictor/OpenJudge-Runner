#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,k;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	d=a-k;
	e=k-(a+b);
	if(a+b+c==0){
		printf("0\n");
	}
	else if(k<a||k<a+b){
		printf("%d\n",a);
	}
	else {
		f=a-e;
		printf("%d\n",f);
	}
	return 0;
}