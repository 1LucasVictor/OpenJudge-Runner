#include <stdio.h>
int isprime(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n % i==0) return 0;
	}
	return 1;
}
int main(){
	int n,i, cnt=0;
	while(scanf("%d",&n)!=EOF){
		  cnt=0;
		  for(i=2;i<=n;i++){
		  	if(isprime(i)==1){
			cnt++;
			}
	    }
	    printf("%d\n",cnt);
	}
	return 0;
}