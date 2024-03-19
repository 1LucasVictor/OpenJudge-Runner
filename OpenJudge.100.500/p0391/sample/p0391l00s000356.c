#include<stdio.h>
#include<string.h>

int main(){

	int i, j, q, a, b, p[1000];
	char str[1000] = {0}, rgst[1000] = {0}, print[1000] = {0};
	
	scanf("%s", str);
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		char order[100] = {0}, p[100] = {0};
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
				print[j] = str[a + j];
			}
			printf("%s\n", print);
		}





	}

	return 0;
}