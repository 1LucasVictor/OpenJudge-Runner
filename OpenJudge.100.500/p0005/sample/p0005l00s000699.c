#include <stdio.h>
#include <string.h>


int main()
{
	char arr[20];
	int i;
	for(i = 0; i < 20; i++){
		arr[i] = '\0';
	}
	scanf("%s",arr);
	for(i = 0; i < 20; i++){
		if(arr[19-i] != '\0'){
			printf("%c",arr[19-i]);
		}
	}printf("\n");
	return 0;
}