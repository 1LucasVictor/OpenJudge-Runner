#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1001];
	int q;
	char instruction[8];
 	int a, b;
	char p[1001];
	int i, j;
	char tmp;
	
	scanf("%s", str);
	scanf("%d", &q);
	
	for (i = 0; i < q; i++){
		scanf("%s", instruction);
		
		if (instruction[2] == 'i'){
			scanf("%d%d", &a, &b);
			for (j = a; j <= b; j++){
				printf("%c", str[j]);
			}
			printf("\n");
		}
		else if (instruction[2] == 'v'){
			scanf("%d%d", &a, &b);
			for (j = 0; j < (b - a + 1) / 2; j++){
				tmp = str[a + j];
				str[a + j] = str[b - j];
				str[b - j] = tmp;
			}
//		printf("<%s>", str);
		}
		else if (instruction[2] == 'p'){
			scanf("%d%d%s", &a, &b, p);
			strncpy(&str[a], p, b - a + 1);
//		printf("<%s>", str);
		}
	}
	return (0);
}
		
		
