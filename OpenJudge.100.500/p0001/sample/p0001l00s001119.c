#include <stdio.h>
int power(int base,int n){
	int i,k=1;
	for(i=0;i<n;i++){
		k*=base;
	}
	return (float)k;
}
main(){
	int a,b,c,d,i=1;
	while(scanf("%d%d",&a,&b)!=EOF){
		i=0;
		c=a+b;
		if(a<0||b<0)break;
		while(1){
			d=c/power(10,i);
			if(!d)break;
			i++;
		}
		printf("%d\n",i);
	}
}