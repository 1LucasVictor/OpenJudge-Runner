#include<stdio.h>
int main(void){
	int a,b,t;
	scanf("%d%d%d",&a,&b,&t);
	int cnt=0;
	while(a<t+1){
		a+=a;
		cnt++;
	}
	printf("%d",b*(cnt));
return 0;
}