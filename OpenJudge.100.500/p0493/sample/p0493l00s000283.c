#include <stdio.h>
#include <string.h>
#include <math.h>
#define lop(i, n) for(i=1; i<=n; i++)

int main()
{
	int x, cnt=0;
	
	scanf("%d", &x);
	
	while(x >= 500){
		x=x-500;
		cnt+=1000;
	}
	
	while(x >= 5){
		x=x-5;
		cnt+=5;
	}
	
	printf("%d", cnt);
	
	return 0;
}