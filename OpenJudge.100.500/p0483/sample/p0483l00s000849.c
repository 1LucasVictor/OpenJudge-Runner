#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i,n) for(int i=0;i<n;i++)


int main()
{
	int n;
	int a[100];
	scanf("%d", &n);
	int c=0;
	int d = 0;
	int e = 0;
	c = n % 10;
	d = n % 100;
	if (c == 7) {
		printf("Yes");
		return 0;
	}else if ((d - c) == 70){
		printf("Yes");
		return 0;
	}
	else if ((n - d - c) == 700) {
		printf("Yes");
		return 0;
	}
	else {
		printf("No");
		return 0;
	}
	
}