#include<stdio.h>

int main(void)
{

	//3つの文節の長さABC
	int A, B, C;
	int count5 = 0;
	int count7 = 0;

	//長さを入力
	scanf("%d %d %d", &A, &B, &C);

	//並べ替えて575になるか検証
	if (A == 5) {
		count5++;
	}
	else if (A == 7) {
		count7++;
	}

	if (B == 5) {
		count5++;
	}
	else if (B == 7) {
		count7++;
	}

	if (C == 5) {
		count5++;
	}
	else if (C == 7) {
		count7++;
	}

	//結果を表示
	if (count5 == 2 && count7 == 1) {
		printf("YES \n");
	}
	else {
		printf("NO \n");
	}

	return 0;

}