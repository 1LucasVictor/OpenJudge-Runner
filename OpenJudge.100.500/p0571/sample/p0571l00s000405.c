#include<stdio.h>
int main(){
	int n;
	int a,b;
	int B;
	scanf("%d%d%d",&n,&a,&b);
	B=n*a;
	if(B>=b)
		printf("%d",b);
	if(B<b)
		printf("%d",B);
	return 0;
}

	