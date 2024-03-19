#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

//#define rep(i,n) for(int i = 0;i<(n);i++);



int ASCttenannoryaku(const void *a,const void *b) {
	return *(int *)a - *(int *)b;
}
int main(void)
{
	int keta, m, s[5], num[5], ans = 0;
	scanf("%d""%d",&keta,&m);
	for (int i = 0; i < m; i++) {
		scanf("%d""%d",&s[i],&num[i]);
	}
	for (int i = 0; i < m; i++) {
		ans += num[i] * pow(10, (keta - s[i]));
		//printf("%d", pow(10, (m - s[i])));
		//printf("%d\n", ans);
		for (int j = 0; j < m; j++) {
			if (s[i] == s[j] && num[i] != num[j] && i != j) {
				printf("-1");
				return 0;
			}
			else if (s[i] == s[j] && num[i] == num[j] && i != j) {
				num[j] = 0;
				s[j] = -1;
			}
			else if (s[i] == m && num[i] == 0) {
				printf("-1");
				return 0;
			}
		}
	}
	printf("%d",ans);
	return 0;
}
/*
1 2 3
4 5 6
7 8 9*/