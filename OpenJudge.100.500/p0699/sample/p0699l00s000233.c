#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A,B,C;
    A>=1 && A<=10;
    B>=1 && B<=10;
    C>=1 && C<=10;
    scanf("%d %d %d",&A,&B,&C);
    if (A+B+C==17) printf("YES");
    else  printf("NO");
	system("pause");
	return 0;
}