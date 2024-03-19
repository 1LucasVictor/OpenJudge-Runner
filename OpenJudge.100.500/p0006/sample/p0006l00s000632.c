#include <stdio.h>

int main(void){
	int a=100000;
	int n;
	int i;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		a*=1.05;
		if(a%1000!=0){
			a/=1000;
			a++;
			a*=1000;
		}
	}
	printf("%d\n",a);
	return 0;
}