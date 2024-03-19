#include <stdio.h>

int main(void)
{
	int input[3] = {0};
	int i = 0;
	
	int five = 0;
	int seven = 0;
	
	scanf("%d %d %d", &input[0], &input[1], &input[2]);
	
	for(i = 0; i < 3; i++){
		if(5 == input[i]){
			five++;
		}else if(7 == input[i]){
			seven++;
		}
	}
	
	if(2 == five && 1 == seven){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
		
}