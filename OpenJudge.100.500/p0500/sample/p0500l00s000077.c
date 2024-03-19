#include <stdio.h>
#include <stdbool.h>

int main() {
	int N, M, s[5], c[5];
	scanf("%d%d",&N,&M);
	for (int i = 0; i < M;i++) {
		scanf("%d%d",&s[i],&c[i]);
	}
	bool t[5] = {false};
	int ans[3] = {10,10,10};

	for (int i = 1; i <= N;i++) {
		for (int j = 1; j <= M;j++) {
			if (s[j-1]==i) {
				if (t[i-1]==false) {
					ans[i-1] = c[j-1];
					t[i-1] = true;
				}
				else if(ans[i-1]!=c[j-1]){
					printf("-1");
					return 0;
				}
			}
		}
	}
	for (int i = 0; i < 3;i++) {
		if (ans[i]==10&&i==0) {
			ans[i] = 1;
		}
		else if(ans[i]==10){
			ans[i] = 0;
		}
	}
	if (ans[0]==0&&N>1) {
		printf("-1");
		return 0;
	}
	for (int i = 0; i < N;i++) {
		printf("%d",ans[i]);
	}
	return 0;
}