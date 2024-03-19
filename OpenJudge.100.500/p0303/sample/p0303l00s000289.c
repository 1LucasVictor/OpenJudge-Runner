#include <stdio.h>

int carry(int n, int k, int w[], int p) {
    int i, j=0;
    int sum;

    for(i=0; i<k; i++) {
        sum=0;
        while(sum+w[j]<=p) {
            sum+=w[j];
            j++;
            if(j==n){//乗せれた量==荷物の量　もう全部積めちゃった
                return j;
            }
        }
    }
    return j;
}

int P(int n, int k, int w[]) {
    int left = 0, right = 100000000000;
    int mid;    
    while (2<=right-left) {
        mid=(left+right)/2;//p
        if (carry(n, k, w, mid)<n) {//ｐ減らしすぎた
            left=mid;
        }
    	else{
            right=mid;
    	}
    }
    return right;
}

int main(void){
	int n, k;
	scanf("%d %d", &n, &k);
	
	int i, w[n], sum=0;
	for(i=0; i<n; i++){
		scanf("%d", &w[i]);
	}
    printf("%d\n", P(n, k, w));

	return 0;
}
