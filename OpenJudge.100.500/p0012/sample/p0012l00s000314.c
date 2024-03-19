#include <stdio.h>

int main(void)
{
	int train[100];
	int ans[100];
	int i, n;
	int now_train, now_ans;
	
	now_train = now_ans = 0;
	while (scanf("%d", &n) != EOF){
		if (n != 0){
			train[now_train] = n;
			now_train++;
		}
		else {
			now_train--;
			ans[now_ans] = train[now_train];
			now_ans++;
		}
	}
	
	for (i = 0; i < now_ans; i++){
		printf("%d\n", ans[i]);
	}
	
	return (0);
}