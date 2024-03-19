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
    int n,a[200001],i;
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    qsort(a, n, sizeof(int), cmpnum);
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