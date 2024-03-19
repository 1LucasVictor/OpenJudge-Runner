#include<stdio.h>
int main()
{
    long long int a[200000],N,i,j;
    int letter;
    scanf("%ld",&N);
    for(i=0;i<N;i++)
        scanf("%ld",&a[i]);
    letter=0;
    for(i=0;i<N;i++)
    	for(j=(i+1);j<N;j++)
    	{
    		if(a[i]==a[j])
    			letter=letter+1;
		}
	if(letter==0)
	    printf("YES");
	else
	    printf("NO");
	return 0;
 } 