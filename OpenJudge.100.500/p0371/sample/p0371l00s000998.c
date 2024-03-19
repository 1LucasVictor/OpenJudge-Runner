#include <stdio.h>

int main(void)
{
	int n;
	long saisyou=1000000,saidai=-1000000,goukei=0,a;
	scanf("%d",&n);
	while(n>0){
	scanf("%d",&a);
	goukei+=a;
	if(a>saidai) saidai=a;
	if(a<saisyou) saisyou=a;
	n--;
	}
	printf("%d %d %d\n",saisyou,saidai,goukei);
	return 0;
}