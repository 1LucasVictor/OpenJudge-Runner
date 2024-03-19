#include<stdio.h>

int a[10000000];

int ok(int id,int n1,int n2){
	int i;
	int sum = 0, ret = 1;

	for(i = 0 ; i < n1 ; i++){
		if(a[i] > id) return 0;
		sum += a[i];
		if(sum > id){
			sum = a[i];
			ret++;
		}
	}
	return ret <= n2;
}

int main(){
	int i;
	int n1, n2, m;
	int l=0,h=1LL<<30;

	scanf("%d%d",&n1,&n2);
	for(i = 0 ; i < n1 ; i++)scanf("%d", a + i);

	for(i = 0 ; l + 1 < h ;){
		m = (l + h) / 2;
		if(ok(m, n1, n2)){
			h = m;
		}else{
			l = m;
		}
	}
	printf("%d\n",l + 1);
	return 0;
}

