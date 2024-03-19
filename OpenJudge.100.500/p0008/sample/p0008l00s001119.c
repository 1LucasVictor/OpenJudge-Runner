 #include <stdio.h>

#define MAX (999999)

int main(void)
{
	int i, j;
	char p[MAX] = {0};
	// ツェツ素ツ青板表ツ催ャツ青ャツづ可使ツづつスツェ
	int n, ans;
	
	// ツつアツづつゥツづァツ素ツ青板表ツ催ャツ青ャ
	p[0] = 1;
	for (i = 2; i <= (MAX / 2); i++){
		for (j = 2; (i * j) <= MAX; j++){
			if (p[(i * j) - 1] == 0){
				p[(i * j) - 1] = 1;
			}
		}
	}
	// ツつアツつアツづ慊づ！
	
	// ツ本ツ氾板つ「ツづつュツづヲツー
	while (scanf("%d", &n) != EOF){
		ans = 0;
		for (i = 0; i < n; i++){
			if (p[i] == 0){
				ans++;
//				printf("%d:", i);
			}
		}
		printf("%d\n", ans);
	}
	
	return (0);
}