#include<stdio.h>
int main(void){
	int a,b,k;
	int i=1,cnt=0;
	scanf("%d %d %d",&a,&b,&k);
	while(1){
		if(a%i==0&&b%i==0){
			cnt++;
		}
		if(cnt==k){
			printf("%d",i);
			return 0;
		}
		i++;
	}
}