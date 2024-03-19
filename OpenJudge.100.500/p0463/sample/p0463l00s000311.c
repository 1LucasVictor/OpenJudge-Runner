#include <stdio.h>
#include <string.h>

int main()
{
	int		n,a;
	char	yomi[4];

	scanf("%d", &n);
	a = n % 10;

	switch(a)
	{
		case 2:
		case 4:
		case 5:
		case 7:
		case 9:
			strcpy(yomi, "hon");
			break;
			
		case 0:
		case 1:
		case 6:
		case 8:
			strcpy(yomi, "pon");
			break;

		default:
			strcpy(yomi, "bon");
	}

	printf("%s\n", yomi);

    return 0;
}
