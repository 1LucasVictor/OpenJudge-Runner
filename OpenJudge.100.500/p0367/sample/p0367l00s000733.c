#include <stdio.h>
int main(){
	int a, b, c, x, i = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (x=a; x < b; x++)
	{
		if (c%x == 0)
		{
			i++;
		}
	}
	if (a == c||b==c)
	i++;
	printf("%d\n", i);
	return 0;
}