#include <stdio.h>

int main()
{
	char str[21];
	int i;
	scanf("%s",&str);
	for (i=0 ; i<20 ; i++){
		if(str[i]==0)break;
	}
	for (i=i-1 ; i>=0 ; i--){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}