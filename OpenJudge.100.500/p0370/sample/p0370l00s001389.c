#include <stdio.h>
int main(void)
{
	int a, b, c;
	char op;

	for (;;)
	{
		scanf("%d %c %d", &a, &op, &b);

		if (op =='+')
		{
			c=a+b;
			printf("%d\n", c);
		}

		else if (op =='-')
		{
			c=a-b;
			printf("%d\n", c);
		}

		else if (op =='*')
		{
			c=a*b;
			printf("%d\n", c);
		}

		else if (op =='/')
		{
			c=a/b;
			printf("%d\n", c);
		}

	    else

	    	return 0;
	}

	return 0;
}