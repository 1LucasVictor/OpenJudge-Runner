#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
	int K,A,B,i;
	char str1[1000],str2[1000];
 
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	
	if(strncmp(str1,str2,(strlen(str1)-1)) == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}