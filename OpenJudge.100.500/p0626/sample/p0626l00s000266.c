#include<stdio.h>
#include<math.h>
int main(void){
	int d,n,p=1;
	scanf("%d %d",&d,&n);
	for(int i=0;i<d;i++){
		p*=100;
	}
	p*=n;
	printf("%d",p);
	return 0;
}