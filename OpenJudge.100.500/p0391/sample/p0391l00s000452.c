#include <stdio.h>
#include <string.h>

int main( void )
{
	char str[1001];
	char inst[8];
	char q[1001];
	char tmp;
	int i, j, n, a, b;
	
	scanf("%s", str);
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%s %d %d", inst, &a, &b);
		
		if(strcmp(inst, "replace") == 0){
			scanf("%s", q);
			for(j = a; j <= b; j++){
				str[j] = q[j - a];
			}
		} else if(strcmp(inst, "reverse") == 0){
			for(j = a; j < b-(j-a); j++){
				tmp = str[j];
				str[j] = str[b-(j-a)];
				str[b-(j-a)] = tmp;
			}
		} else if(strcmp(inst, "print") == 0){
			for(j = a; j <= b; j++){
				printf("%c", str[j]);
			}
			printf("\n");
		} else {
			// DO NOTHING
		}
	}
	
	return 0;
}