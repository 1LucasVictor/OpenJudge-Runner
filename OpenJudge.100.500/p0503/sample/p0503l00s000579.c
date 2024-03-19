#include<stdio.h>
int main()
{
    long long int a[200000],N,i,j,*p;
    int letter;
    scanf("%ld",&N);
    for(i=0;i<N;i++)
        scanf("%ld",&a[i]);
    letter=0;
    p=a;
    for(i=0;i<N;i++)
    	for(j=(i+1);j<N;j++)
    	{
    		if(*(p+i)==*(p+j))
    		{
				letter=letter+1;
				break;
			}
		}
	if(letter==0)
	    printf("YES");
	else
	    printf("NO");
	return 0;
 } 