#include<stdio.h>
#include<math.h>

int count(int);
int main(void)
{
	int c=0, i, n, N;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &N);
		c+=count(N);
	    
	}
	printf("%d\n", n-c);
	return 0;
}

int count(int N)
{
	int j;
	if(N>100){
			for(j=3; j<=sqrt(N); j+=2){	
				if(N%j==0){ return 1; } 
				else if(N%2==0){ return 1;}}
	    
	            }
	else{ for(j=2; j<N; j++){ if(N%j==0){ return 1; } } }
	return 0;
}
