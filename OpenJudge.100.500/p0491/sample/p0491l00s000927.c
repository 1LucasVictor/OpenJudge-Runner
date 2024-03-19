#include<stdio.h>
#include<math.h>

int main(void){
	long int N,K,ans1,ans2;
	scanf("%ld %ld",&N,&K);
	ans1=N%K;
	ans2=labs(ans1-K);
	if(ans1<=ans2){
		printf("%ld\n",ans1);
	}else{
		printf("%ld\n",ans2);
	}
	return 0;
}