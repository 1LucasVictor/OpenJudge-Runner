#include<stdio.h>
int n, m, k, x, ans, ansa, ansb, ja, jb;
long long a[200010], b[200010], bj[200010];
void dfs(int i, int j, int t, int num){
	if(t > k) return;
//	printf("aa");
//	if(i > n || j > m) return;
//	if(bj[num][t]) return;
//	bj[num][t] = 1;
	if(ans < num)  ans = num;
	if(i <= n) dfs(i+1, j, t+a[i], num+1);
	if(j <= m) dfs(i, j+1, t+b[j], num+1);	
}
int main(){
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		a[i] += a[i-1];
		if(a[i] <= k) ja = i, ansa++;
	}//	printf("%d %d\n", ja, jb);
	for(int i = 1; i <= m; i++){
		scanf("%d", &b[i]);
		b[i] += b[i-1];
		if(b[i] <= k) jb = i, ansb++;
	}
	while(a[ja] + a[jb] > k && ja > 1 && jb > 1){
		if(a[ja] > a[jb]) ja--;
		else if(a[ja] < a[jb]) jb--;
		else{
			x = 0;
			while(a[ja-x] == a[jb-x] && x < ja && x < jb){
				x++;
			}
			if(a[ja-x] < a[jb-x]) jb--;
			else ja--;
		}
	}
	printf("%d", ja+jb);
	return 0;
} 