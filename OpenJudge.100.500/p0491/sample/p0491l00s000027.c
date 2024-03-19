#include<stdio.h>
#include<math.h>

int main(void){
	long long int N,K;
	int ans1,ans2;
	scanf("%d %d",&N,&K);
	ans1=N%K;
	ans2=abs(ans1-K);
	if(ans1<=ans2){
		printf("%d\n",ans1);
	}else{
		printf("%d\n",ans2);
	}
	return 0;
}