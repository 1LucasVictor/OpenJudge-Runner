#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[1000];
	int num;
	char op[100];
	int i, j;
	int s, f;
	char re[1000];
	char replace[] = "replace";
	char reverse[] = "reverse";
	char print[] = "print";

	scanf("%s", str);
	scanf("%d", &num);

	for(i=0; i<num; i++){
		scanf("%s", op);
		
		if(strcmp(op, replace) == 0){
			scanf("%d %d %s", &s, &f, re);
			for(j=s; j<= f; j++){
				str[j] = re[j-s];
			}
		}	
		else if(strcmp(op, reverse) == 0){
			scanf("%d %d", &s, &f);
			strcpy(re, str);
			for(j=0; j<=f-s; j++){
				str[j+s] = re[f-j];
			}
		}
		else if(strcmp(op, print) == 0){
			scanf("%d %d", &s, &f);
			for(j=s; j<=f; j++){
				printf("%c", str[j]);
			}
			printf("\n");
		}
	}
	
	return 0;

}
