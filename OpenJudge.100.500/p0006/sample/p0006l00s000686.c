#include <stdio.h>

int main(void)
{
	int n, i;
	unsigned long money=100000;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		money *= 1.05;
		if(money%1000 != 0){
			money = ( (money/1000) * 1000 ) + 1000;
		}
	}

	printf("%lu\n", money);
    return 0;
}