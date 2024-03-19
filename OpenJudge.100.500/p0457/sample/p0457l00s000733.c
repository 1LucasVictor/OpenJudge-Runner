#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 内部定数
#define D_BOOK_MAX		200005									// 最大本数

// 内部変数
static FILE *szpFpI;											// 入力
static long long sl1A[D_BOOK_MAX];								// 合計時間(A)
static long long sl1B[D_BOOK_MAX];								// 合計時間(B)
static int siACnt;												// 本数(A)
static int siBCnt;												// 本数(B)
static int siMax;												// 最大時間

// 内部変数 - テスト用
#ifdef D_TEST
	static int siRes;
	static FILE *szpFpA;
	static int siTNo;
#endif

// １行出力
int
fOutLine(
	char *pcpLine				// <I> １行
)
{
	char lc1Buf[1024];

#ifdef D_TEST
	lc1Buf[0] = '\0';
	fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
	if (strcmp(lc1Buf, pcpLine)) {
		siRes = -1;
	}
#else
	printf("%s", pcpLine);
#endif

	return 0;
}

// 最大値 - 取得
int
fGetMaxI(
	int piVal1					// <I> 値１
	, int piVal2				// <I> 値２
)
{
	if (piVal1 > piVal2) {
		return piVal1;
	}
	else {
		return piVal2;
	}
}

// 実行メイン
int
fMain(
)
{
	int i;
	char lc1Buf[1024];

	// 本数・ - 取得
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d%d%d", &siACnt, &siBCnt, &siMax);

	// 合計時間(A) - 取得
	for (i = 1; i <= siACnt; i++) {
		fscanf(szpFpI, "%lld", &sl1A[i]);
		sl1A[i] += sl1A[i - 1];
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// 合計時間(B) - 取得
	for (i = 1; i <= siBCnt; i++) {
		fscanf(szpFpI, "%lld", &sl1B[i]);
		sl1B[i] += sl1B[i - 1];
	}
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);

	// 最大本数 - 取得
	int liMax = 0;
	int liBCnt = siBCnt;
	for (int liACnt = 0; liACnt <= siACnt; liACnt++) {

		// 本数(B)を調整
		while (liBCnt >= 0) {
			long long llSum = sl1A[liACnt] + sl1B[liBCnt];
			if (llSum <= (long long)siMax) {
				break;
			}
			else {
				liBCnt--;
			}
		}
		if (liBCnt < 0) {
			break;
		}

		// 最大本数 - 更新
		liMax = fGetMaxI(liMax, liACnt + liBCnt);
	}

	return liMax;
}

// １回実行
int
fOne(
)
{
	int liRet;
	char lc1Buf[1024];

	// 入力 - セット
#ifdef D_TEST
	sprintf(lc1Buf, ".\\Test\\T%d.txt", siTNo);
	szpFpI = fopen(lc1Buf, "r");
	sprintf(lc1Buf, ".\\Test\\A%d.txt", siTNo);
	szpFpA = fopen(lc1Buf, "r");
	siRes = 0;
#else
	szpFpI = stdin;
#endif

	// 実行メイン
	liRet = fMain();

	// 出力
	sprintf(lc1Buf, "%d\n", liRet);
	fOutLine(lc1Buf);

	// 残データ有無
#ifdef D_TEST
	lc1Buf[0] = '\0';
	fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
	if (strcmp(lc1Buf, "")) {
		siRes = -1;
	}
#endif

	// テストファイルクローズ
#ifdef D_TEST
	fclose(szpFpI);
	fclose(szpFpA);
#endif

	// テスト結果
#ifdef D_TEST
	if (siRes == 0) {
		printf("OK %d\n", siTNo);
	}
	else {
		printf("NG %d\n", siTNo);
	}
#endif

	return 0;
}

// プログラム開始
int
main()
{

#ifdef D_TEST
	int i;
	for (i = D_TEST_SNO; i <= D_TEST_ENO; i++) {
		siTNo = i;
		fOne();
	}
#else
	fOne();
#endif

	return 0;
}

