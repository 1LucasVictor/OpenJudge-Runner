#include<stdio.h>
int main()
{
	char input[5];
	scanf("%s",input);
	if(input[1] == 'B')
	{
		input[1] = 'R';
	}
	else{
		input[1] = 'B';
	}
	printf("%s",input);
	return 0;
}