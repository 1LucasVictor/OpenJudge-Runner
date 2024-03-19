#include <stdio.h>

int main(void)
{
	char inp[256];
	char buf[256];
	int i;
	int sl;
	int s;
	int len;
	int ret;
	do {
		ret = scanf("%s", inp);
		len = strlen(inp);
		if (len == 1 && inp[0] == '-')
			break;
		scanf("%d", &sl);
		for (i = 0; i < sl; i++)
		{
			buf[0] = '\0';
			scanf("%d", &s);
			strncat(buf, inp + s, len - s);
			strncat(buf, inp,  s);
			strcpy(inp, buf);
		}
		printf("%s\n", inp);
	} while (ret != EOF);

	return 0;
}
