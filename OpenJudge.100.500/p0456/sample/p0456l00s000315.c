#include <stdio.h>
#include <string.h>

int main(void){

	char s[200000];
	char t[200000];
	int count;
	int len;

	scanf("%s", s);
	scanf("%s", t);

	count = 0;
	len = strlen(s);
	for (int i = 0; i < len; ++i)
	{
		if (s[i] != t[i])
		{
			count += 1;
		}
	}

	printf("%d\n", count);

	return 0;
}