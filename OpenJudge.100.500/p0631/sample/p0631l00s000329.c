#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a<=c && c<=a+b){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}