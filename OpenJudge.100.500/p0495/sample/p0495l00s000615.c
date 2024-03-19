#include <stdio.h>

int main(void)
{
	char	comp[4];	//[S] Company!
	char	init;
	int 	flag;		//answer.
	int		i;

	//STDinput S. 3 chars.
	scanf("%s", comp);

	//Set a FLAG if even one character is different.
	i = 0;
	init = comp[0];
	while(i < 3)
	{
		if(comp[i] != init)
			flag = 1;
		i++;
	}

	//Display answer.
	if(flag == 1)
		printf("Yes");
	else
		printf("No");
	
	return (0);
}