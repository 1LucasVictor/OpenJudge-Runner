#include<stdio.h>
#define MAX 100000

typedef long long llong;
int n, k;
llong t[MAX];

int solve();
int check(llong p);

int main(void){

	int i;
	llong ans;

	scanf("%d %d", &n, &k);
	for(i =0;i<n;i++){
		scanf("%d", &t[i]);
	}
	ans = solve();
	
	printf("%d\n", ans);
	return 0;
}


int check(llong p){
	int  j, i = 0;
	llong s;
	for( j =0;j<k;j++){
		s = 0;
		while(s + t[i] <=p){
			s+= t[i];
			i++;
			if(i ==n){
				return n;
			}
		}
		
	}
	return i;
	
}

int solve(){
	llong left =0;
	llong right = 100000*10000;
	llong mid;
	while(right -left >1){
		mid = (left +right)/2;
		int v = check(mid);
		if(v>=n){
			right = mid;}
		else{left = mid;}
	}
	
	return right;
	
}
