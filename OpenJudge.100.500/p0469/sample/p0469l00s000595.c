#include<stdio.h>
int main()
{
	int k;
	int a,b,c,d;
	scanf("%d",&k);
	scanf("%d",&a);
	scanf("%d",&b);
	c =k - a%k;
	d = c+a;
	if(d<=b){
		printf("OK");
	}else{
		printf("NG");
	}
	return 0;
}