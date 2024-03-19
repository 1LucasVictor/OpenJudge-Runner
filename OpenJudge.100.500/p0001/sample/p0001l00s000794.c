#include <stdio.h>

int main(){
	int a,b,i,keta;
	while(scanf("%d %d",&a,&b) != EOF){
		keta = 1;
		for(i = 10;;i *= 10) {
			if((a + b) / i) keta++;
			else {
				printf("%d\n",keta);
				break;
			}
		}
	}
	return 0;
}