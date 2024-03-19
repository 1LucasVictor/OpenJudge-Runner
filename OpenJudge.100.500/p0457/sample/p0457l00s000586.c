#include<stdio.h>
int n, m, k, ans, a[200010], b[200010], bj[200010];
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
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i <= m; i++)
		scanf("%d", &b[i]);
	dfs(1, 1, 0, 0);
	printf("%d", ans);
	return 0;
} 