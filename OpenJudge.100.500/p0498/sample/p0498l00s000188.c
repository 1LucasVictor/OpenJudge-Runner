#include <stdio.h>
int main()
{
    int page;
	int ans;
	scanf("%d", &page);

	if (page % 2 == 1)
		ans = (page + 1) / 2;
	else
		ans = page / 2;
	printf("%d", ans);
    return (0);
}
