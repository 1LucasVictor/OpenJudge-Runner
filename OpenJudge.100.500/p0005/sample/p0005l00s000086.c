#include <stdio.h>
#include <string.h>

int main(void){
	char str[20];
	int n,i,temp;

	scanf("%s",&str);

	n = strlen(str);

	for(i = 0;i < n/2;i++){
		temp = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = temp; 
	}

	printf("%s\n",str);

	return 0;
}