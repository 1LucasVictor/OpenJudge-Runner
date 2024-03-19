#include <stdio.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

int isPrime(int);

int main(){
	int n,i,num[10000],cnt=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if((isPrime(num[i]))==TRUE) cnt++;
	}
	
	printf("%d\n",cnt);
	
	return 0;
}

int isPrime(int x){
	int i;
	
	if(x==2) return TRUE;
	if(x<2 || x%2==0) return FALSE;
	
	i=3;
	while(i<=sqrt(x)){
		if(x%i==0) return FALSE;
		i+=2;
	}

	return TRUE;
}
	
