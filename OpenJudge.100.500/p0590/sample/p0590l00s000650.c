#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e,k;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
	int max;
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	if(max<d) max=d;
	if(max<e) max=e;
	if(max<=k)
        printf("Yay!");
    else
        printf(":(");
	return 0;
}


