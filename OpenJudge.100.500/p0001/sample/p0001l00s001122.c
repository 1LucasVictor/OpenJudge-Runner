#include <stdio.h>

int main (void) {
	int a,b,sum,keta = 0;
	
	while (scanf("%d %d",&a,&b) == 2) {
		sum = a + b;
		while(sum>0){
			keta++;
			sum/=10;
		}
		printf("%d\n",keta);
		sum = 0;
		keta = 0;
	}
    return 0;
}