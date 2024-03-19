#include <stdio.h>
#include <string.h>
#define lop(i, n) for(i=1; i<=n; i++)

int main()
{
	int L, R;
	int ans=2019, i, j;
	
	scanf("%d %d", &L, &R);
	
	if(L-R==0) ans=0;
	else {
		for(i=L; i<R; i++){
			for(j=i+1; j<=R; j++){ 
				if(ans>(i*j)%2019)ans=(i*j)%2019;
			}
		}
	}
	
	printf("%d", ans);
				
	
return 0;
}