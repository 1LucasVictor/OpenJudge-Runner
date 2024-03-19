#include <stdio.h>

int capa(int w[],int n,int k,int p){ //最大積載量Pのとき荷物の数vを返す
	int i,j,rest; //restは一つのトラックの残り容量
	int first = 0; //m番目まで積み終わっているなら次のトラックはfirst番目の荷物から積む
	for(i = 0; i < k; i++){
		rest = p;
		for(j = first; j < n && rest >= w[j]; j++){
			rest = rest - w[j];
		}
		first = j;
	}
	return first;
}

int main(void){
	int n,k,i;
	scanf("%d %d",&n,&k);
	int w[n];
	for(i = 0; i < n; i++){
		scanf("%d",&w[i]);
	}
	
	int max = 100000 * 10000;
	int left = 0, right = max, mid;
	while(right - left > 1){ //二分探索
		mid = (left + right) / 2;
		int v = capa(w,n,k,mid);
		if(v >= n){
			right = mid;
		}
		else{
			left = mid;
		}
	}
	printf("%d\n",right);
	
	return 0;
}
