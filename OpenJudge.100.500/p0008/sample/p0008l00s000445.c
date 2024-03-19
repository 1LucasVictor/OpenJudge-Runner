#include<stdio.h>

int CheckPrime(int n){
	int i;
	if(n%2==0){
		return 0;
	}
	for(i=3;i<n/i;i+=2){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int AddPrime(int n, int num, int* value, int* result){
	int i;
	for(i=0;i<num;i++){
		if(n<=value[i]) result[i]++;
	}
	return 0;
}
int main(){
	int n, num=0, max=0, value[30], result[30];
	int i;
	while(scanf("%d",&n)!=EOF){
		value[num] = n;
		result[num] = 0;
		if(max<n) max=n;
		num++;
	}

	AddPrime(2,num,value,result);
	AddPrime(3,num,value,result);
	for(i=6;i-1<=max;i+=6){
		if(CheckPrime(i-1)==1){
			AddPrime(i-1,num,value,result);
		}
		if(CheckPrime(i+1)==1){
			AddPrime(i+1,num,value,result);
		}
	}
	for(i=0;i<num;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}