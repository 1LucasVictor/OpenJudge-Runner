#include<stdio.h>
#include<string.h>

int main(){

	int i, j, q, a, b, p[1000];
	char str[10000] = {0}, rgst[10000] = {0};
	
	scanf("%s", str);
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		char order[1000] = {0}, p[1000] = {0};
		scanf("%s", order);
		if(strcmp(order, "replace") == 0){
			scanf("%d %d %s", &a, &b, p);
			for(j = 0; j < b - a + 1; j++){
				str[a + j] = p[j];
			}
		} else if(strcmp(order, "reverse") == 0){
			scanf("%d %d", &a, &b);
			for(j = 0; j < b - a + 1; j++){
				rgst[a + j] = str[a + j];
			}
			for(j = 0; j < b - a + 1; j++){
				str[a + j] = rgst[b - j];
			}
		} else if(strcmp(order, "print") == 0){
			scanf("%d %d", &a, &b);
			for(j = 0; j < b - a + 1; j++){
				printf("%c", str[a + j]);
			}
			printf("\n");
		}





	}

	return 0;
}