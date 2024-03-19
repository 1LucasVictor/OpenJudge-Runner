#include <stdio.h>

int main(void) {
	char arr[22];
	int i, len=0;
	
	scanf("%s", arr);
	
	while(arr[len]!=0){
		len++;
		
	}
	for(i=len-1;i>=0;i--)
	printf("%c", arr[i]);
	
	putchar('\n');

	return 0;
}