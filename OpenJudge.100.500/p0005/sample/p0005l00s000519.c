#include<stdio.h>
#include<string.h>
#define L 200

int main(){
	int i, j;
	char str[L];
	scanf("%s",str);
	j = strlen(str);
	for(i=0;i<j;i++){
		printf("%c",str[j-i-1]);
	}
	printf("\n");
	return 0;
}