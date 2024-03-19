#include <stdio.h>

int main(void)
{
	int input[3];
	int i;
	int five_number = 0;
	int seven_number = 0;

	scanf("%d %d %d", &input[0], &input[1], &input[2]);

	for(i = 0; i < 3; i++){
		if(5 == input[i]){
			five_number++;
		}
		if(7 == input[i]){
			seven_number++;
		}
	}

	if(2 == five_number && 1 == seven_number){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}
