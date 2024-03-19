#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D;
	scanf ("%d%d%d%d",&A,&B,&C,&D);
	if (A<=C&&B>=C&&D>=B)
	printf ("%d\n",B-C);
	else if (A<=C&&D<=B)
	printf("%d\n",D-C);
	else if (C<=A&&B<=D&&B>=C)
	printf("%d\n",B-A);
	else if (A>=C&&B>=D&&D>=A)
	printf("%d\n",D-A);
	else
	printf ("0\n");
}
