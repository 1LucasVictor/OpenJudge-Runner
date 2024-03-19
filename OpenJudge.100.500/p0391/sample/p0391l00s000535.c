#include<stdio.h>
#include<string.h>
int main(void){
	int n, len, a, b, i, j, k;
	char str[1001], order[8], str_rep[1001], str_rev[1001];
	
	scanf("%s\n", str);
	len = strlen(str);
	scanf("%d\n", &n);
	for(i = 0; i < n; i++){
		scanf("%s %d %d", order, &a, &b);
		if(strncmp(order, "print", 5) == 0){
			scanf("\n");
			for(j = a; j <= b; j++){
				printf("%c", str[j]);
			}
			printf("\n");
		}else if(strncmp(order, "replace", 7) == 0){
			scanf("%s\n", str_rep);
			for(j = a, k = 0; j <= b; j++, k++){
				str[j] = str_rep[k];
			}
		}else if(strncmp(order, "reverse", 7) == 0){
			scanf("\n");
			strncpy(str_rev, str, 1000);
			for(j = a, k = b; j <= b; j++, k--){
				str[j] = str_rev[k];
			}
		}
	}
	
	return 0;
}

