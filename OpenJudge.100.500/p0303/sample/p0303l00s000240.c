#include <stdio.h>

#define MAX 1000000001

int w[100001], n, k;

int f(int m){
	int ans=0,sum=0;
	for(int i=0;i<n;i++){
		if(w[i] > m){
            return MAX;
        }
		if(sum + w[i] <= m){
            sum += w[i];
        }
		else{
			ans++;
			sum = w[i];
		}
	}
	return ans;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
        scanf("%d",w+i);
    }
	int l=0,r=MAX;
	while(r-l > 1){
		int m = (l+r)/2;
		if( f(m) <= k-1){
            r = m;
        }
		else {
            l = m;
        }
	}
	printf("%d\n",r);

    return 0;
} 

