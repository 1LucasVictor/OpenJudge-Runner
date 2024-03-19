#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int x, int y){return x<y?x:y;}
int main(void){
	char s[100000];
	scanf("%s",s);
	int a=0,b=0,i;
	for(i=0;i<strlen(s);i++){
		if(s[i] == '0')a++;
		else b++;
	}
	printf("%d",min(a,b)*2);
	return 0;
}