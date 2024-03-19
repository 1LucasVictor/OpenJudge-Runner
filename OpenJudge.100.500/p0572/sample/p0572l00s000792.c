#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
int main(){
	ll  L,R;
	int min2=1000000;
	int min;
	scanf("%lld%lld",&L,&R);
	for(int i=L;i<=R;i++){
		if(i%2019==0){
			printf("0\n");
			return 0;
		}
		if(min2>i%2019){
			min2=i%2019;
			min=i;
		}
	}
	printf("%d\n",min*(min+1)%2019);
	return 0;

}