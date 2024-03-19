#include<stdio.h>
#include<math.h>
int isPrime(int);
int main(){
	int n,i,j=0;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		if(isPrime(A[i])==1){
			j++;
		}
	}
	printf("%d\n",j);
}
int isPrime(int x){
	int i;
  if (x == 2)
    return 1;
  if (x < 2 || x%2==0){
    return 0;
   }
  i = 3;
  while( i <= sqrt(x)){ //の平方根
    if (x % i==0) //で割り切れる
      return 0;
    i = i + 2;
	}
 return 1;
 }
