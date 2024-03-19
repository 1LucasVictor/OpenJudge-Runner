#include <stdio.h>

int main(void){

	int FirstNum, SecondNum, Sum;
	while(scanf("%d %d", &FirstNum, &SecondNum) == 2){
		Sum = FirstNum + SecondNum;
		if (Sum < 10){ printf("1\n"); goto label;}
		if (Sum < 100){ printf("2\n"); goto label;}
		if (Sum < 1000){ printf("3\n"); goto label; }
		if (Sum < 10000){ printf("4\n"); goto label; }
		if (Sum < 100000){ printf("5\n"); goto label; }
		if (Sum < 1000000){ printf("6\n"); goto label; }
		if (Sum < 10000000){ printf("7\n"); goto label; }
		label: ;
	}
	return 0;
}