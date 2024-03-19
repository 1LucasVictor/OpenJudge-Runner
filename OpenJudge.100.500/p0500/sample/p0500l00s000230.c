#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int n, m, i;

    scanf("%d%d", &n, &m);

    int s[m], c[m];
    int resp[n+1], quantas = 0;

    for(i=0; i<n; i++)
    {
    	resp[i] = -1;
    }

    for(i=0; i<m; i++)
    {
    	scanf("%d%d", &s[i], &c[i]);
    }

 
    for(i=0; i<m; i++)
    {
    	resp[s[i]-1] = c[i];
    }

    for(i=0; i<n; i++)
    {
    	if(resp[i] == -1)
    	{
    		resp[i] = 0;
    	}
    }

    if(resp[0] == 0)
    {
    	return printf("-1\n");
    }

    for(i=0; i<n; i++)
    {
    	printf("%d", resp[i]);
    }

	return 0;
}