#include<stdio.h>

void call(int n)
{
	int i = 1;
	
	for (; i <= n; i++){
		int x = i;
		if (x % 3 == 0){
			printf(" %d", i);
			continue;
		}
		do{
			if (x % 10 == 3){
				printf(" %d", i);
				break;
			}
			x /= 10;
		} while (x);
	}
	putchar('\n');
}

int main()
{
	int n;
	scanf("%d", &n);
	call(n);
	return 0;
}