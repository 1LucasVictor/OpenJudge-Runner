#include <stdio.h>
#include <string.h>

int main(void){
	char str[201];
	int n;
	int h;
	char work[201];
	int i,j;
	
	scanf("%s",str);
	while(str[0]!='-'){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&h);
		for(i=0;i<h;i++) work[i] = str[i];
		for(j=0;i<strlen(str);i++,j++) str[j] = str[i];
		for(i=0;i<h;i++,j++) str[j] = work[i];
	}
	printf("%s\n",str);
	scanf("%s",str);
	}
	return 0;
}