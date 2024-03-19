#include<stdio.h>
int main()
{
    int a[100],N,i,j,letter;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    letter=0;
    for(i=0;i<N;i++)
    {
    	for(j=(i+1);j<N;j++)
    	{
    		if(a[i]==a[j])
    		{
    			letter=letter+1;
    			break;
			}
		}
	}
	if(letter==0)
	    printf("YES");
	else
	    printf("NO");
	return 0;
 } 