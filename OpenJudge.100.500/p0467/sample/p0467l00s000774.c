#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,k,g;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	d=a-k;
	e=k-(a+b);
	if(a+b+c==0){
		printf("0\n");
	}
	else if(a==k){
		printf("%d",a);
	}
	else if(k<=a||k<=a+b){
			if(k<=a){
				printf("%d\n",k);
			}
			else printf("%d\n",a);
	}
	else {
		f=a-e;
		printf("%d\n",f);
	}
	return 0;
}