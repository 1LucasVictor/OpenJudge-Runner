#include<stdio.h>

int main()
{
	int a,b,c,d,e,k,m=0;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
	if(b-a<=k && c-a<=k && d-a<=k && e-a<=k && c-b<=k && d-b<=k && e-b<=k && d-c<=k && e-c<=k && e-d<=k) 
		printf("Yay!");
	else printf(":(");
    return 0;
}