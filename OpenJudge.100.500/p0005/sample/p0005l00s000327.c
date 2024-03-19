#include<stdio.h>

int main(void){
	
	int i=0,j=0;
	char str[20],gyg[20];
	
	scanf("%s",str);
	
	while('\0'!=str[i]){
		i++;
	}
	
	while(i>=0){
		gyg[j]=str[i];
		j++;
		i--;
	}
	
	for(i=0;i<j-1;i++){
		printf("%c",gyg[i+1]);
	}
	
	printf("\n");
	
	return 0;

}