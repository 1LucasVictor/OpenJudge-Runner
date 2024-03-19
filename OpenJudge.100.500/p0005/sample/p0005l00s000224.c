#include<stdio.h>

int main (void){
	
	int i,j;
	char c[30]={};
	
	for(i=0;;i++){
	scanf("%c",&c[i]);
	if(c[i]=='\n')break;
	}
	
	for(j=i-1;j>=0;j--){
		printf("%c",c[j]);
	}
	printf("\n");
	
	return 0;
}