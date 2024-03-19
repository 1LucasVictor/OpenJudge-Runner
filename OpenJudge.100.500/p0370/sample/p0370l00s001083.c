#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char **pp;
	int i, j;
	int answers[20];
	int a, c;
	char *b;
	
	pp = (char **)malloc(sizeof(char *) * 30);
	for (i = 0; i< 30; i++){
		pp[i] = (char *)malloc(sizeof(char) * 20);
		fgets(pp[i], sizeof(char) * 20, stdin);
		a = atof(strtok(pp[i], " "));
		b = strtok(NULL, " ");
		c = atof(strtok(NULL, " "));
	
		switch((int)*b){
			case 42:
				answers[i] = (a * c);
				break;
			case 43:
				answers[i] = (a + c);
				break;
			case 45:
				answers[i] = (a - c);
				break;
			case 47:
				answers[i] = (a / c);
				break;
			case 63:
				goto prin;
			default:
				i--;
				break;
		}
	
	}
	
	prin:
	for (j = 0; j < i; j++){
	printf("%d\n", answers[j]);
	}
	
	return 0;
}