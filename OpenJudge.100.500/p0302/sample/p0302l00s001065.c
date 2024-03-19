#include <stdio.h>          // printf(), fprintf(), scanf()

const char NUL = '\0';
unsigned char hash_t[1 << 22] = { 0 };

int
key(const char c)
{
	switch (c)
	{
	case 'A':
		return 0;

	case 'C':
		return 1;

	case 'G':
		return 2;

	case 'T':
	default:
		return 3;
	}
}

int
hash(const char* s)
{
	int u = 1;
	while (*s != NUL)
	{
		u = u * 4 + key(*s);
		s++;
	}

	return u;
}

int
main(int argc, char** argv)
{
	char command[8];
	char str[14];
	int n;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%s %s", command, str);
		int h = hash(str);
		int u = h >> 3;
		int v = 1 << (h & 7);
		switch (command[0])
		{
		case 'i':
			hash_t[u] |= v;
			break;

		case 'f':
		default:
			if ((hash_t[u] & v) != 0)
				printf("yes\n");
			else
				printf("no\n");
			break;
		}
	}

	return 0;
}