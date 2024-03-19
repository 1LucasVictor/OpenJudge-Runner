#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s,f=0;
    scanf("%d",&s);
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			if(i*j == s)
			{
				f=1;break;
			}
    if(s>100||s<1) f=0;
    if(f==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}
