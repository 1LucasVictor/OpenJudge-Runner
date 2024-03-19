#include<stdio.h>
ary[1000000];
int isPrime(int n){
	int i;
	if(ary[n]==2){
		return 0;
	}
	else if(ary[n]==1){
		return 1;
	}
	if(n % 2 == 0){
		ary[n]=2;
		return 0;
	}
	for(i = 3; i * i <= n; i += 2)
		if(n % i == 0){
			ary[n]=2;
			return 0;
		}
	ary[n]=1;
	return 1;
}
c,n;int main(){
	ary[0]=2;
	ary[1]=2;
	ary[2]=1;
	for(;scanf("%d",&n)!=EOF;c=0){
		for(;n>0;n--){
			c+=isPrime(n);
		}
		printf("%d\n",c);
	}
	exit(0);
}