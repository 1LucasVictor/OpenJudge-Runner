#include <stdio.h>

int main(void)
{
	int a, b;
	int GCD, LCM;
	int j = 0;
	
	
	while (scanf("%d %d", &a, &b) != EOF){
		
		for (GCD = 1; j == 0; GCD++){
			if (GCD % a == 0 && GCD % b == 0){
				j++;
			}
		}
		
		j = 0;
		
		for (LCM = a; j == 0; LCM--){
			if (a % LCM== 0 && b % LCM == 0){
				j++;
			}
		}
		
		j = 0;
		
		printf("%d %d\n", LCM + 1, GCD - 1);
		
	}
	
	return (0);
}