#include <stdio.h>

int main(void)
{
	int mark[4][13];
	int n;
	int i;
	char str[3];
	int x;
	int j;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 13; j++){
			mark[i][j] = 0;
		}
	}
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%s %d", str, &x);
		if (str[0] == 'S'){
		    mark[0][x - 1] = 1;
		}
		else if (str[0] == 'H'){
		    mark[1][x - 1] = 1;
		}
		else if (str[0] == 'C'){
			mark[2][x - 1] = 1;
		}
		else if (str[0] == 'D'){
			mark[3][x - 1] = 1;
		}
	}
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 13; j++){
			if (mark[i][j] != 1){
				switch (i){
				  case 0:
				    printf("S %d\n", j + 1);
					break;
					
				  case 1:
				    printf("H %d\n", j + 1);
					break;
					
				  case 2:
				    printf("C %d\n", j + 1);
					break;
					
				  case 3:
				    printf("D %d\n", j + 1);
					break;
				}
			}
		}
	}
	
	return (0);
	}