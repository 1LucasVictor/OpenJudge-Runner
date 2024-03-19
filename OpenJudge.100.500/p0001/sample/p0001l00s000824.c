#include<stdio.h>
int main (void){
	int a,b;
	int num;
	int ans=0;

	while(scanf("%d %d",&a,&b)!=EOF){
		num=a+b;
		while(num!=0){
			num=num/10;
			ans++;
		}
		printf("%d\n",ans);
		ans=0;
	}
		
	return 0;
}