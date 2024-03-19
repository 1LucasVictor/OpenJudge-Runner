#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n,a,b;
    scanf("%d",&n);

    a = n/2;
    if(n%2 == 1)
    {
        a += 1;
    }

    printf("%d",a);
	return 0;
}