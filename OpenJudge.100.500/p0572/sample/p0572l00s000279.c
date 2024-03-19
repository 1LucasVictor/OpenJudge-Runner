#include <stdio.h>

int main()
{
	long long int L, R, ans=2020, tmp, i, j;
	
	scanf("%lld %lld", &L, &R);
	
	if(R-L>2019) ans=0;
	else {
		for(i=L; i<R; i++){
			for(j=i+1; j<=R; j++){ 
				tmp=(i*j)%2019;
				if(ans>tmp)ans=tmp;
			}
		}
	}
	
	printf("%lld", ans);
				
	
return 0;
}