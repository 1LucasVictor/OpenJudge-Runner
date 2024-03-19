#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define scani(x) scanf("%d",&x)
#define scanc(x) scanf("%s",x)
#define printi(x) printf("%d",x)
#define printin(x) printf("%d\n",x)
#define printc(x) printf("%s",x)
#define repd(i,n,m) for(int i = n; i > m; i--)
#define repu(i,n,m) for(int i = n; i < m; i++)
#define allprintu(i,n,m,a) for(int i = n; i < m; i++){if(i != m-1){printf("%d ",a[i]);}else{printf("%d",a[i]);}}
#define allprintd(i,n,m,a) for(int i = n; i > m; i--){if(i != 0){printf("%d ",a[i]);}else{printf("%d\n",a[i]);}}
	
#define MAX 100000
int n,k;
int b[MAX];

int check(long long int p){
	long long int sum = 0;
	int i = 0;
	repu(j,0,k){
		sum = 0;
		while(sum + b[i] <= p){
			sum += b[i];
			i++;
			if(i == n){
				return n;
			}
		}
	}
	return i;
}

long long int solve(){
	long long int left = 0, right = 100000*10000, mid;
	int v;
	while(right - left > 1){
		mid = (left + right)/2;
		v = check(mid);
		if(v >= n){
			right = mid;
		}else{
			left = mid;
		}
	}
	return right;
}
int main(void){
	scani(n);
	scani(k);
	repu(i,0,n){
		scani(b[i]);
	}
	long long int result = solve();
	printf("%llu\n",result);
	return 0;
}
