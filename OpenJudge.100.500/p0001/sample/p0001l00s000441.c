#include<stdio.h>
main(){
	int i,text,a,b;
	while(scanf("%d",&a)!=EOF){
		scanf("%d",&b);
		i=1;
		a+=b;
		while(a>=10){
			a/=10;
			i++;
		}
	printf("%d\n",i);
}
	return 0;
}