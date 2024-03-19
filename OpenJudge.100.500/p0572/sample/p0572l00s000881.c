#include <stdio.h>

int main()
{
	long long int L, R, ans=2020, i, j;
	
	scanf("%lld %lld", &L, &R);
	
	if(L-R==0) ans=0;
	else {
		for(i=L; i<R; i++){
			for(j=i+1; j<=R; j++){ 
				if(ans>(i*j)%2019)ans=(i*j)%2019;
			}
		}
	}
	
	printf("%lld", ans);
				
	
return 0;
}