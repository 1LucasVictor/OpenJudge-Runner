#include <stdio.h>

int		main(void)
{
	int		A;//各秒に
	int		B;//増えるビスケットの量は
	int		T;//秒に何枚か

	scanf("%d%d%d", &A, &B, &T);
	printf("%d", ((T / A) * B));
	return (0);
}
