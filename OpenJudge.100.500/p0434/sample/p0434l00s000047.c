#include <stdio.h>
#include <unistd.h>

int main()
{
	int		n;

	scanf("%d", &n);
	printf("%s", (n >= 30 ? "Yes" : "No"));
}