#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdlib.h>

int main(void) {

	char mozi[200] = "";
	char temp_mozi[200] = "";
	char temp_shuffle_t[100]="";
	int mozi_n = 0;//文字の数
	int shuffle;//合計シャッフル回数
	int shuffle_t;//シャッフル時に何枚後ろにするか

	while (1) {
		scanf("%s", &mozi);

		if (mozi[0] == '-') {
			break;
		}

		scanf("%d", &shuffle);

		for (int i = 0; i < shuffle; i++) {

			scanf("%d", &shuffle_t);

			


			for (int n = 0; mozi[n] != '\0'; n++) {//文字の数、計測、コピー
				temp_mozi[n] = mozi[n];
				mozi_n++;
			}

			for (int j = 0; j < (mozi_n)-(shuffle_t); j++) {//前に文字詰め
				mozi[j] = mozi[(shuffle_t + j)];
			}

			for (int k = 0; k < shuffle_t; k++) {//後ろに挿入
				mozi[(mozi_n - shuffle_t) + k] = temp_mozi[k];
			}

			mozi_n = 0;
		}

		printf("%s\n", mozi);
	}
	return 0;
}
