#include <stdio.h>

int main(void)
{
	int hp; //HP
	int n; //n種類の技
	int i;
	scanf("%d%d", &hp, &n);

	int at[n];
	i = 0;
	while (i < n)
		scanf("%d", &at[i++]);
	i = 0;
	while (i < n)
		hp -= at[i++];
	if (hp <= 0)
		printf("Yes", hp);
	else
		printf("No", hp);
	return (0);
}
