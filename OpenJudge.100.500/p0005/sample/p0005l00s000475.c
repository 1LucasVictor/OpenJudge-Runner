#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char str[21],rts[21];

	scanf("%s", str);
	for(i=0; i<strlen(str); i++){
		rts[i] = str[strlen(str)-i-1];
	}
	rts[strlen(str)] = '\0';
	printf("%s\n", rts);
	return 0;
}