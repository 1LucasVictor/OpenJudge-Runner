#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int i,j;
	int a,b;
	int q;
	char tmp[1000];
	char op[9];
	char s[1000];
	char tmp1;

	scanf("%s", s);
	scanf("%d", &q);
	for(i=0; i<q; i++){
		scanf("%s", op);
		if(!strcmp(op,"replace")){
			scanf("%d%d", &a, &b);
			scanf("%s", tmp);
			for(j=0; j<b-a+1; j++){
				s[a+j] = tmp[j];	
			}
		} else if(!strcmp(op, "reverse")){
			scanf("%d%d", &a, &b);
			for(j=0; j< (a + b)/2; j++){
				tmp1 = s[a+j];
				s[a+j] = s[b-j];
				s[b-j] = tmp1;
			}
		} else{
			scanf("%d %d", &a, &b);
			for(j=a; j<=b; j++)
				printf("%c", s[j]);
			printf("\n");
		}
	}

	return 0;
}