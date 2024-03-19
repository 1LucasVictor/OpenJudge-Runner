#include <stdio.h>
int main(){
	int a,b;
	long c[10000],sum,min,max;

	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d",&c[b]);
	}
	sum=c[0];
	for(b=1;b<a;b++){
		sum += c[b];
	}
	min=c[0];
	for(b=1;b<a;b++){
		if(min>c[b])
			min=c[b];
	}
	max=c[0];
	for(b=1;b<a;b++){
		if(max<c[b])
			max=c[b];
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}