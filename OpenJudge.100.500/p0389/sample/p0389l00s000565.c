#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {

	int max = 10;
	char c;
	char resultStr[10][201] = { 0 };

	
	int kurikaesi = 0;
	while (kurikaesi < max) {
		char str[201] = { 0 };

		int wn = 0; // n枚のカード

		scanf("%s%*[^\n]%*c", &str);
		wn = strlen(str);
		if (strcmp(str, "-") == 0) {
			break; 
		}
		int m = 0;
		scanf("%d%*[^\n]%*c", &m); // シャッフル回数

		int h = 0;
		int i_m = 0;
		for (; i_m < m; i_m++) {
			scanf("%d%*[^\n]%*c", &h);
			char rearStr[201] = { 0 };
			char frontStr[201] = { 0 };
			int j = 0;
			int i = 0;

			for (i = 0; i < h; i++) {
				frontStr[i] = str[i];
			}
			for (i = h; j < wn - h; i++, j++) {
				rearStr[j] = str[i];
			}
			strcat(rearStr, frontStr);

			for (i = 0; i < 200; i++) {
				str[i] = rearStr[i];
			}
		}
		strcat(resultStr[kurikaesi], str);
		kurikaesi++;
	}

	// resultを出力
	int i = 0;
	for (; i < kurikaesi; i++) {
		printf("%s\n", resultStr[i]);
	}


	return 0;
}
