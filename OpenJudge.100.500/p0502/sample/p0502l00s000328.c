#include<stdio.h>
int main(void){
	int n,a,f=1;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		if(a%2==0&&a%3!=0&&a%5!=0){
			f=0;
		}
	}
	printf(f?"APPROVED":"DENIED");
	return 0;
}