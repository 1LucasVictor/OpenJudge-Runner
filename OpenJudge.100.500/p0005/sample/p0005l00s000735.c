#include <stdio.h>

int main(void)
{
	char a;
	char hoge[21];
	int i, j;
	int A;
	
	scanf("%s", hoge);
	
	for (i = 0; i < 21; i++){
		a = hoge[i];
		if (a == '\0'){
			A = i;
			break;
		}
	}
	for (j = A-1; j > -1; j--){
		printf("%c", hoge[j]);
	}
	
	printf("\n");
	
	return (0);
}