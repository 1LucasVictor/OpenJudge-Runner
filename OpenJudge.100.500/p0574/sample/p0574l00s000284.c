#include <stdio.h>

int main(){
	char str[16];
	scanf("%s", str);
	char c;
	int i = 0;
	while((c = str[i]) != 0){
		if(c == str[++i]){
			printf("Bad");
			return 0;
		}
	}
	printf("Good");
}