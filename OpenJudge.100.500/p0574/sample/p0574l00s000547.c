#include<stdio.h>
int main(void){
	char i, s[100];
	for(i = 0; i < 4; i++)
		scanf("%c", &s[i]);
	for(i = 0; i < 3; i++){
		if (s[i] == s[i + 1]){
			puts("Bad");
			return 0;
		}
	}
	puts("Good");
	return 0;
}