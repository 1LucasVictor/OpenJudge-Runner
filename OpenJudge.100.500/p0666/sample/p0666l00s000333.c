#include<stdio.h>
int main()
{
	int x,a,b;
	int n;
	scanf("%d %d %d",&x,&a,&b);
	if(a>=b){
		printf("delicious\n");
	}
	else{
		n=b-a;
		if(n<=x+1){
			printf("safe\n");
		}
		else{
			printf("dangerous\n");
		}
	}
	return 0;
}