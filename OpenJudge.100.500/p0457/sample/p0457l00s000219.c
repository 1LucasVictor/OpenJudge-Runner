#include <stdio.h>
int main(void) {
	int n,m,k = 0;
	int a[200010];
	int b[200010];
	int ai,bi = 0;
	int count = 0;
	
	scanf("%d%d%d",&n,&m,&k);
	for(ai=0;ai<n;ai++){
		scanf("%d",&a[ai]);
		}
	for(bi=0;bi<m;bi++){
		scanf("%d",&b[bi]);
	}
	ai = 0;
	bi = 0;
	
	while(1){
		if((ai < n) && (bi < m)){
			if(a[ai] <= b[bi]){
				k = k - a[ai];
				ai++;
			}
			else{
				k = k - b[bi];
				bi++;
			}
		}
		else if(ai < n){
			k = k - a[ai];
			ai++;
		}
		else if(bi < m){
			k = k - b[bi];
			bi++;
		}
		else{
			break;
		}
		
		if(k >= 0){
			count++;
		}
		else{
			break;
		}
	}
	printf("%d",count);
	return 0;
}
