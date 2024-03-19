#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,num,cnt=0;
	int flg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		flg=0;
		scanf("%d",&num);
		for(j=2;(double)j<=sqrt(num);j++){
			if(num%j==0){
				flg=1;
				break;
			}
		}
		if(flg==0){
			cnt++;
		}
	}
	printf("%d",cnt);
}