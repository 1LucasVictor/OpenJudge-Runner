#include<stdio.h>
long long int min(long long int a, long long int b){
	if(a<b)
	return a;
	else
	{
		return b;
	}
	
}
int main(){
	long long int i,j,l,r,rem=2020,temp;
	scanf("%lld%lld",&l,&r);

	if((r-l+1)>=2019){
		printf("0");
		return 0;
	}
	else{
		for(i=l;i<r+1;i++){
			for(j=i+1;j<r+1;j++){
				temp=(i*j)%2019;
				rem=min(rem,temp);
			}
		}
		printf("%lld",rem);
		return 0;
	}

}