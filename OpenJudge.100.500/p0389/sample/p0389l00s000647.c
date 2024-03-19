#include <stdio.h>
#include <string.h>

int main()
{

	char str[256];
	while(scanf("%s", str), strcmp(str, "-"))
	{
		int m, h, len, ofs = 0;
		scanf("%d", &m);
		for(int i = 0; i < m; ++i)
		{
			scanf("%d", &h);
			ofs += h;
		}

		len = strlen(str);
		for(int i = 0; i < len; ++i)
		{
			putchar(str[(i + ofs) % len]);
		}
		putchar('\n');
	}
	return 0;
}
