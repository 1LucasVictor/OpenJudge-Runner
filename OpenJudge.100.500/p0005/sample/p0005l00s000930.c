#include <stdio.h>

int main(){
	int i;
	char str[21]={};
	scanf("%s", str);
	for(i=20;i>-1;i--)
	{
		if(str[i]!=0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
	return 0;
}