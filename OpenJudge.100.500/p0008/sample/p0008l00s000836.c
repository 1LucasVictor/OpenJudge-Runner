#include <stdio.h>
#include <math.h>
#define N 1000000
int main(){	
	int i, j, n, answer;
	int a[N];
	for(i=0; i<N; ++i) a[i]=0;
	a[2] = 1;
	for(i=3; i<N; i+=2) a[i]=1;							
	for(i=3; i<=N-1; i+=2){
		if(a[i]==0) continue;
		for(j=i+i; j<N; j+=i) a[j] = 0;				
	}
	while(scanf("%d", &n) != EOF){
		answer = 0;
		for(i=0;i<=n;++i){
			answer+=a[i];
		}
		printf("%d\n", answer);
	}
	
}