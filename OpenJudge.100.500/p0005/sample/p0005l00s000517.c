#include<stdio.h>
#include<string.h>

int main(){
	int len=0;
	int i;
	char str[21];
	
	while(scanf("%20s",str) != EOF){
	
		len = strlen(str);
	
		for(i=len-1;i>-1;--i){
			printf("%c",str[i]);
		}
		printf("\n");
	}
	
	return 0;
}