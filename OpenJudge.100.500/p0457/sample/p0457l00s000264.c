#include <stdio.h>
int main(void) {
	int n,m,k = 0;
	int a = 0;
	int b = 0;
	unsigned long aSum[200010];
	unsigned long bSum[200010];
	int ai,bi = 0;
	int count = 0;
	
	//For binary search
	int mid = 0;
	int left = 0;
	int right = 0;
	
	aSum[0] = 0;
	bSum[0] = 0;
	
	scanf("%d%d%d",&n,&m,&k);
	for(ai=1;ai<n+1;ai++){
		scanf("%d",&a);
		aSum[ai] = aSum[ai-1] + a;
		//printf("aSum = %d\n",aSum[ai]);
		}
	for(bi=1;bi<m+1;bi++){
		scanf("%d",&b);
		bSum[bi] = bSum[bi-1] + b;
	}
	
	for(ai=1;ai<n+1;ai++){
		left = 1;
		right = m;
		//binary search
		while(left <= right){
			mid = (left + right)/2;
			if((aSum[ai]+bSum[mid]) <= k){
				left = mid + 1;
				//読んだ冊数を更新
				if(count < (ai + mid)){
					count = ai + mid;
				}
			}else{
				right = mid - 1;
			}
		}
	}
	
	printf("%d",count);
	return 0;
}
