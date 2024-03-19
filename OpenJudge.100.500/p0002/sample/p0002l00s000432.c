#include <stdio.h>

int main()
{
	int max, num1, num2, num3, i, ab, c;
	int result[100];
	
	scanf("%d", &max);

	for(i=1; i<=max; i++){
		scanf("%d %d %d", &num1, &num2, &num3);
		
		ab = (num1*num1) + (num2*num2);
		c = (num3*num3);
		
		if(ab == c){
			result[i] = 1;
		}else{
			result[i] = 0;
		}
	}

	for(i=1; i<=max; i++){
		if(result[i] == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}