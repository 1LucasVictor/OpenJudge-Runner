#include<stdio.h>

int main(void){
	char s[11] = {0};
	char t[12] = {0};
	int cont = 0;
	int len = 0;

	scanf("%s", s);
	scanf("%s", t);

	while(s[len]){
		len++;
	}

	for(int i = 0; s[i] != 0; i++){
		if(s[i] == t[i]){
			cont++;
		}

	}
	if(cont == len){
		printf("Yes");
	}
	else
		printf("No");

	return 0;
}