#include<stdio.h>
#include<math.h>

int isprime(int x);

int main(void){

int n;
	int a[10000];
	int i,num,j,sosu;
	scanf("%d", &n);
	for(i =0;i<n;i++){
		scanf("%d", &a[i]);
	}
	sosu =0;
	for(i =0 ;i<n;i++){
		if(isprime(a[i]) ==1){
			sosu++;}
	}
	
	printf("%d\n", sosu);
	return 0;
}

int isprime(int x){
	int i=0;
	if(x ==2){
		return 1;}
	if(x<2 || x%2==0){
		return 0;
	}
	i = 3;
	while(i <=sqrt(x)){
		if(x%i ==0){
			return 0;}
		i+=2;
	}
	return 1;
}
