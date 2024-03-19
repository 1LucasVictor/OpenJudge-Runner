#include<stdio.h>

void exchange(char str[1200],int n){
	int i;
	for (i = 0; i < n; i++){
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		else if (97 <= str[i] && str[i] <= 122)
			str[i] = str[i] - 32;
	}
}

int main(void){
	char str[1200];
	int i=0;
	while (1){
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;

		i++;
	}
	int n = i;
	exchange(str,n);
	for (i = 0; i < n; i++){
		printf("%c", str[i]);
	}
	putchar('\n');


	return 0;
}
