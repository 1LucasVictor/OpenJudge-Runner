#include <stdio.h>

int main(void)
{
	int paper;		//N
	int print;		//Answer

	scanf("%d", &paper);

	print = paper / 2;
	if(paper % 2 != 0)
		print++;
	printf("%d\n", print);

	return(0);
}
