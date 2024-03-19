#include<stdio.h>

#define MAX 21

int main(){
	char str[MAX];
	char str_rev[MAX];
	int i;
	
	scanf("%s", str);
	
	for(i = 0; i < MAX; i++)
	{
		str_rev[i] = 0;
	}
	
	for(i = 0; i < (MAX-1); i++)
	{
		if(str[i] != 0)
		{
			str_rev[MAX-2-i] = str[i];
		}
		else
		{
			break;
		}
	}
	
	printf("%s\n", str_rev+(MAX-1-i));

	return 0;
}