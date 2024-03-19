#include <stdio.h>
#include <string.h>


int main()
{
	int n,i,money = 100000,a;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		money = money * 1.05;
		money = money + 500;
		a = money % 1000;
	}
		money = money - a;
		//printf("%d %d\n",money,a);
	printf("%d\n",money);
	return 0;
}