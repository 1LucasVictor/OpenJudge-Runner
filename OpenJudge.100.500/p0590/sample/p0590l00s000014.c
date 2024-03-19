#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e,k;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
	int max,min;
	max=a;min=a;
	if(max<b) max=b;
	if(max<c) max=c;
	if(max<d) max=d;
	if(max<e) max=e;
	if(min>b) min=b;
	if(min>c) min=c;
	if(min>d) min=d;
	if(min>e) min=e;
	if(max-min<=k)
        printf("Yay!");
    else
        printf(":(");
	return 0;
}


