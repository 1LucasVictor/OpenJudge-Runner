#include<stdio.h>
#include<math.h>

int isPrime(int n){
	int root = sqrt(n);
	for(int i=2;i<=root;i++){
		if(n%i==0)
			return 0;
	}

	return 1;
}


int main(){

int n;
scanf("%d",&n);
int count = 0;
int num;
for(int i=0;i<n;i++){
	scanf("%d",&num);

	int primeChecker = isPrime(num);
	if(primeChecker==1)
		count++;
}


printf("%d\n",count);

	return 0;

} 
