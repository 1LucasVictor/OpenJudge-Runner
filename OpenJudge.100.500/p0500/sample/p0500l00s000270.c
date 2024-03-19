#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007

long int combination(long int n, long int r);

//qsort用、昇順
int compare_int(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
//qsort(data, 10, sizeof(int), compare_int)

long int combination(long int n, long int r)
{
	if(r>n-r) r = n-r;
	if(r == 0) return 1;
	else if(r == 1) return n;
	return (combination(n-1, r) + combination(n-1, r-1));
	//大きくなるとき
	/*
	long int tmp1, tmp2, tmp3;
	tmp1 = combination(n-1, r);
	if(tmp1>=MOD) tmp1 = tmp1%MOD;
	tmp2 = combination(n-1, r-1);
	if(tmp2>=MOD) tmp2 = tmp2%MOD;
	tmp3 = tmp1+tmp2;
	if(tmp3>=MOD) tmp3 = tmp3%MOD;
	return (tmp3);
	*/
}


int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	if(m==0){
		int ans = pow(10, n);
		printf("%d\n", ans);
	}
	else{
		int s[m], c[m];
		for(int i=0; i<m; i++){
			scanf("%d%d", &s[i], &c[i]);
		}
		int num[n+1];
		num[0] = 1;
		for(int i=1; i<=n; i++){
			num[i] = -1;
		}
		//printf("yey\n");

		for(int i=0; i<m; i++){
			if((num[s[i]] == -1) || (num[s[i]] == c[i])){
				num[s[i]] = c[i];
			}
			else{
				num[0] = -1; //printf("i:%d\n", i);
			}
		}

		//printf("year!\n");

		if(num[1]==0) num[0] = -1; //printf("here\n");
		if(num[1]==-1) num[1] = 1;
		for(int i=2; i<=n; i++){
			if(num[i] == -1) num[i] = 0;
		}

		//printf("uui!\n");

		if(num[0]==1){
			int ans = 0;
			for(int i=1; i<=n; i++){
				ans = ans*10 + num[i];
			}
			printf("%d\n", ans);
		}
		else printf("-1\n");
	}

	return 0;
}