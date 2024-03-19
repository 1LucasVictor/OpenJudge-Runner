#include <stdio.h>

int main(void) {
	int a,b,c,anser=0;
	scanf("%d %d %d",&a,&b,&c);
	for(;;){
		if(c%a==0){
			anser++;
		}
		if(a==b){
			break;
		}
		a++;
	}
	printf("%d\n",anser);
	return 0;
}