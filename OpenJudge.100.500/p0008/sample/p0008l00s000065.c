#include<stdio.h>
int main(){
	int a,b,n;
	int p[80000];
	p[0]=2;
	n=1;
	for(a=3;a<1000000;a++){
		for(b=0;b<n;b++){
			if(a%p[b]==0){break;}
			if(a<p[b]*p[b]){
				p[n]=a;
				n++;
				break;
			}
		}
	}
	for(;;){
		if(scanf("%d",&a)==EOF){break;}
		n=0;
		while(a>=p[n]){
			n++;
		}
		if(a<2){n=0;}
		printf("%d\n",n);
	}
	return 0;
}