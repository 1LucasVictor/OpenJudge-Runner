#include <stdio.h>
int N, a[105];
int main()
{
	int ok = 1;
    scanf("%d", &N);
    for(int i=1;i<=N;i++)
        scanf("%d", &a[i]);
    for(int i=1;i<=N;i++)
    {
    	if(a[i]%2==0)
    	{
    		if(a[i]%3==0||a[i]%5==0)
    		    continue;
    		else
    		{
    			ok = 0;
    			break;
			}
		}
	}
	if(ok)
	    printf("APPROVED\n");
	else printf("DENIED\n");
	return 0;
}