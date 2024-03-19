#include<stdio.h>

int main ()
{
	char str[5];
	int flag=0;

	scanf("%s",str);

	for (int i=0;i<3;i++)
	{
		if (str[i]==str[i+1])
			flag++;
	}

	if (flag==0)
		printf("Good\n");

	else 
		printf("Bad\n");

	return 0;
}
