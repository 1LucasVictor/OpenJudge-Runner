#include<stdio.h>

int main(void){
	int x, y, i, n, t, cnt,flag;
	int total[100000];
	total[0] = 3;
	cnt = 0;
	while (scanf("%d", &n) != EOF){
		t = 2;
		cnt = 0;
		for (x = 3; x <= n; x+=2){
			flag = 0;
			i = 0;
			for (y = 0; y <= cnt; y++){
				if (x%total[y] == 0){
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				total[++cnt] = x;
				t++;
			}
		}
		printf("%d\n", t);
	}
	return 0;
}