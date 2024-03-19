#include <stdio.h>

int main(void)
{
	int n,a,saisyou=1000000,saidai=-1000000;
	long goukei=0;
	scanf("%d",&n);
	while(n>0){
	scanf("%d",&a);
	if(a<saisyou) saisyou=a;
	if(a>saidai) saidai=a;
	goukei+=a;
	n--;
	}
	printf("%d %d %ld\n",saisyou,saidai,goukei);
	return 0;
}