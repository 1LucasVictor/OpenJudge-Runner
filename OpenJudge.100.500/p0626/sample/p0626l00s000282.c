#include <stdio.h>
int main(void){
	int d,n;
	scanf("%d %d",&d,&n);
	int ans = 0;
	int i;
	if( d==0){
		ans = n;
		if( n==100){
			ans += 1;
		}
		printf("%d",ans);
	}else if( d==1){
		ans = 0;
		for(i=0;i<n;i++){
			ans += 100;
		}
		if( n==100){
			ans += 100;
		}
		printf("%d",ans);
	}else if(d==2){
		ans =0;
		for(i=0;i<n;i++){
			ans +=10000;
		}
		if( n==100){
			ans += 10000;
		}
		printf("%d",ans);
	}
	return 0;
}