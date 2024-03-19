int cmpnum(const void * n1, const void * n2)
{
	if (*(long *)n1 > *(long *)n2)
	{
		return 1;
	}
	else if (*(long *)n1 < *(long *)n2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    long int n,a[200001],i;
    scanf("%ld",&n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%ld",&a[i]);
    }
    int j;
    qsort(a, n, sizeof(long), cmpnum);
    for(i = 0 ; i < n - 1 ; i++ )
    {
        if(a[i] == a[i+1])
        {
            printf("NO\n");
            return 0 ;
        }
    }
    printf("YES\n");
    return 0;
}