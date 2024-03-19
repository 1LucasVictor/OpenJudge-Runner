#include<stdio.h>

int main(void) {

	char S[3];

	//運航会社を入力
	scanf("%s", S);
	
	if (S=='AAA' || S=='BBB') {
		//すべて同じ会社が運航しているとき
		printf("No \n");
	}
	else {
		//複数の会社で運航しているとき
		printf("Yes \n");
	}

	return 0;
}