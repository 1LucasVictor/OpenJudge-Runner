#include<stdio.h>
main () {
	int i;
	int j;
	unsigned long a,b,total;
	while(1) {
		if(scanf("%d %d",&a,&b) == EOF){
			break;
		}
		total = a + b;
		i = 0;
		while(total >= 10) {
			total /= 10;
			i++;
		}
		i++;
		printf("%d\n",i);
	}
	return 0;
	
}