#include <stdio.h>          // printf(), scanf()
#include <stdbool.h>

const char NUL = '\0';
bool hash_t[1 << 25] = { false };
char key[256] = { 0 };

int
hash(const char* s)
{
	int u = 1;
	while (*s != NUL)
	{
		u = u * 4 + key[(int)*s];
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

	key['A'] = 0;
	key['C'] = 1;
	key['G'] = 2;
	key['T'] = 3;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%s %s", command, str);
		int h = hash(str);
		switch (command[0])
		{
		case 'i':
			hash_t[h] = true;
			break;

		case 'f':
		default:
			if (hash_t[h])
				printf("yes\n");
			else
				printf("no\n");
			break;
		}
	}

	return 0;
}