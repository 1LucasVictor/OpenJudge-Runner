#include <stdio.h>

void REV_print(int n, int a[])
{
    int i;
    for (i=n-1; i>=0; i--)
    {
        printf("%d", a[i]);
        if(i==0)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
}

int main()
{
	int i,n,a[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
	    scanf("%d", &a[i]);
	}

	REV_print(n, a);
	return 0;
}

