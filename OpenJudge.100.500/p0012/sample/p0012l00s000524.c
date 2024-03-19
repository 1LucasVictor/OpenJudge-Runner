#include <stdio.h>

int t[10];

int main(void){
	int num;
	int i;
	
	i = 0;
	
	while (scanf("%d", &num) != EOF){
		if (num == 0){
			printf("%d\n", t[i-1]);
			i--;
		}
		else {
			t[i] = num;
			i++;
		}
	}
	
	return 0;
}