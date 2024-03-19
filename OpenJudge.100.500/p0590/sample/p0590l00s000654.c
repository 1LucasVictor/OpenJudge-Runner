#include<stdio.h>

int main()
{
	int a,b,c,d,e,k,m=0;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
	if(b-a<=k) m += 1;
	if(c-a<=k) m += 1;
	if(d-a<=k) m += 1;
	if(e-a<=k) m += 1;
	if(c-b<=k) m += 1;
	if(d-b<=k) m += 1;
	if(e-b<=k) m += 1;
	if(d-c<=k) m += 1;
	if(e-c<=k) m += 1;
	if(e-d<=k) m += 1;
	if(m=10) printf("Yay!");
	else printf(":(");
    return 0;
}