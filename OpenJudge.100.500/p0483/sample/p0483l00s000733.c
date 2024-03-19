#include<stdio.h>
int main()
{
	int n;
	int a,b,c;
	scanf("%d",&n);
	a=n%100;
	b=n/10;
	c=a%10;
	if(a==7||b==7||c==7){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
