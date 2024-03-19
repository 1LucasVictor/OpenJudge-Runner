#include<stdio.h>
#define MAX_SIZE 256

int count(int num);

int main(){
	int num[2];
	
	while(scanf("%d %d", num, num+1) != EOF)
	{
		printf("%d\n", count(num[0] + num[1]));
	}
	
	return 0;
}

int count(int num)
{
	int ans = 0;
	
	while(num > 0)
	{
		ans++;
		num /= 10;
	}
	
	return ans;
}