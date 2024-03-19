#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(i=l;i<n;i++)

int main(void){
	char str[25];
	int len,i;
	
	scanf("%s",str);
	len=strlen(str);

	for(i=len-1;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}