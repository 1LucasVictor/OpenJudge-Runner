#include <stdio.h>

int main(void)
{
	int a;
	int p;
	int i;
	int j;
	int flag;
	
	while (scanf("%d",&a) != EOF){
		p = 0;
		for(i = a; i > 1; i--){
			flag = 0;
			j = i - 1;
			while (flag != 1){
				if (i % j == 0){
					flag = 1;
				}
				if (j == 1){
				p++;
				flag = 1;
			}
				j--;
			}
		}
		printf("%d\n", p);
	}
	return (0);
}