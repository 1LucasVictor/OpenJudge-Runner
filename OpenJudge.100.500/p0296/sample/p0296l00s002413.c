#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myTop = 0;
int myData[110] = { 0 };
void push(int x)
{
	myData[++myTop] = x;
}
void pop()
{
	--myTop;
}
int top()
{
	return myData[myTop];
}

int main()
{
	char chIn[1000] = { '\0' };
	int nTemp = 0;
	int na = 0, nb = 0;

	while (scanf("%s", chIn) != EOF)
	{
		if (chIn[0] - '0' <= 9 && chIn[0] - '0' >= 0)
		{
			nTemp = atoi(chIn);
			push(nTemp);
		}
		else
		{
			nb = top();
			pop();
			na = top();
			pop();
			switch (chIn[0])
			{
			case '-':
				push(na - nb);
				break;
			case '+':
				push(na + nb);
				break;
			case '*':
				push(na * nb);
				break;
			}
		}
	}
	printf("%d\n", top());
	return 0;
}
