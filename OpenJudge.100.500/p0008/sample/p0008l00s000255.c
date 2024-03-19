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
			j = 1000;
			while (flag != 2){
				if (i % j == 0){
					if(i <= 1000){
						++flag;
					}
					else{
						flag = 2;
					}
				}
				
				if (j == 1){
					p++;
					flag = 2;
				}
				j--;
			}
		}
		printf("%d\n", p);
	}
	return (0);
}