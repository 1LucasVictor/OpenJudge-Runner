#include <stdio.h>

long long find(long long min,long long max){
	long long i;
	long long ansmin=min,minmod=2020;
	//printf("%lld <= ans < %lld\n",min,max);
	for(i=min;i<max && i<2020+min;i++){
		
		if(i%2019<minmod){
			ansmin=i;
			minmod=i%2019;
		}
		//printf("check %lld mod 2019 = %lld  ansmin %lld\n",i,i%2019,ansmin);
	}
	return ansmin;
}

int main(){
	long long l,r;
	long long i,j;
	scanf("%lld %lld",&l,&r);
	i=find(l,r);
	j=find(i+1,r+1);
	//printf("i=%lld j=%lld\n",i,j);
	printf("%lld\n",(i*j)%2019);
	
	return 0;
}