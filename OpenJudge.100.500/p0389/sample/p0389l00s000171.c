#include<stdio.h>
#include<string.h>

int main(void){
	char str[201];		// input; card line, size>=200
	int m=0;			// input; shuffle times, size>=100
	int h=0, sum_h=0;	// input; shuffle height, sum_h:finally shuffle height
	int i=0;			// loop index;
	char* p_str = str;	// str pointer
	char cpy[201];
	char* p_cpy = cpy;	// cpy pointer	
	char ans[201];


	scanf("%s", str);
	while(strcmp(str, "-") != 0){
		scanf("%d", &m);
		sum_h = 0;

		for(i=0;i<m;i++){
			scanf("%d", &h);
			sum_h += h;
		}

		h = sum_h % strlen(str);

		if(h == 0) printf("%s\n", str);
		else{
			strncpy(cpy, str, h);
			*(p_cpy + h) = '\0';
			strcpy(ans, p_str+h);
			strcat(ans, cpy);

			printf("%s\n", ans);
		}
		scanf("%s", str);
	}
	
	return 0;
}