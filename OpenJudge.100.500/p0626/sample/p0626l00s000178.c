#include <stdio.h>
#define X 100

int main(){
	int D, N;
	scanf("%d %d", &D, &N);
	int i, ans, num=1, temp;
	
	for(i=0;i<D;i++){
		num*=X;
	}
	ans=num*N;
	temp=ans;
	for(i=0;i<=D&&temp%100==0;i++){
		temp/=X;
	}
	if(i!=D){
		for(i=0;;i++){
			ans+=num;
			temp=ans;
			for(i=0;i<=D&&temp%100==0;i++){
				temp/=X;
			}
			if(i==D){
				break;
			}
		}
	}
	
	printf("%d", ans);
}