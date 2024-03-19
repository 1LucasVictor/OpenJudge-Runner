#include <stdio.h>

int main(void) {
	long long int L,R,i,j,tmp,ans=2020;
	scanf("%lld %lld",&L,&R);
	if(R-L>2019){
		printf("0");
	}else{
		for(i=L;i<R;i++){
			for(j=i+1;j<=R;j++){
				tmp=(i*j)%2019;
				if(ans>tmp){
					ans=tmp;
				}
			}
		}
		printf("%lld",ans);
	}
	return 0;
}