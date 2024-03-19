#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int st[200], top = 0;
	char c[20];

	while(scanf("%s", c) != EOF){
		if (c[0] >= '0' && c[0] <= '9')
		{
			st[top] = atoi(c);
			top++;
		}else if (c[0] == '+')
		{
			top--;
			st[top-1] += st[top];
		}else if (c[0] == '-')
		{
			top--;
			st[top-1] -= st[top];
		}else if (c[0] == '*')
		{
			top--;
			st[top-1] *= st[top];
		}
	}

	printf("%d\n", st[top-1]);

	return 0;
}