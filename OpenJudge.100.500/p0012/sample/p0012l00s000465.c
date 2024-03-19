#include <stdio.h>

int main(void)
{
	int in[10];
	int i;
	int n;
	
	for (i = 0; i < 10; i++){
		in[i] = 0;
	}
	while (scanf("%d", &n) == 1){
		if (n != 0){
			for (i = 0; i < 10; i++){
				if (in[i] == 0){
					in[i] = n;
					break;
				}
			}
		}
		else {
			for (i = 9; i >= 0; i--){
				if (in[i] != 0){
					printf("%d\n", in[i]);
					in[i] = 0;
					break;
				}
			}
		}
	}
	return (0);
}