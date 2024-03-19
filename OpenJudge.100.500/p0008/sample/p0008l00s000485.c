#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main () {
	int a,b=9,c=9,d=9,e=9,f=0,g=1000,h;
	int kaisu[1000];
	for(g=0;g<1001;g++)kaisu[g]=0;

	while(scanf("%d",&a)!=EOF){
		for(b=2;b<=a;b++){
			for(c=2;c<b;c++){
				if(b%c==0){goto OWARI;}
			}
			kaisu[f]++;

		OWARI:;
		}
	f++;


	}
	for(h=0;h<f;h++)printf("%d\n",kaisu[h]);
	

	scanf("%d",&a);
	return 0;}