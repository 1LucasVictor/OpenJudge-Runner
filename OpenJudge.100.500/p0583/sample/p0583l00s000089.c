#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 内部定数
#define D_MASS_MAX		200005									// 最大マス数
#define D_MASS_NONE		'.'										// マス - なし

// 内部変数
static FILE *szpFpI;											// 入力
static int siA, siB, siC, siD;									// 位置
static char sc1Mass[D_MASS_MAX];								// マス

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
	fgets(lc1Buf, sizeof(lc1Buf), szpFpA);
	if (strcmp(lc1Buf, pcpLine)) {
		siRes = -1;
	}
#else
	printf("%s", pcpLine);
#endif

	return 0;
}

// 移動チェック
int
fChkMove(
	int piSNo					// <I> 開始位置
	, int piENo					// <I> 終了位置
)
{
	int i;

	// 移動
	int liMax = 0;
	int liLen = 0;
	for (i = piSNo; i <= piENo; i++) {
		if (sc1Mass[i] == D_MASS_NONE) {
			liLen++;
			if (liMax < liLen) {
				liMax = liLen;
			}
		}
		else if (sc1Mass[i + 1] == D_MASS_NONE) {
			liLen = 0;
		}
		else {
			return -1;
		}
	}

	return liMax;
}

// Bの妨げチェック
int
fChkB(
)
{
	// D > C
	if (siD > siC) {
		return 0;
	}

	// Bの前後
	if (sc1Mass[siB - 1] == D_MASS_NONE) {
		if (sc1Mass[siB + 1] == D_MASS_NONE) {
			return 0;
		}
	}

	// Dの前後
	if (sc1Mass[siD - 1] == D_MASS_NONE) {
		if (sc1Mass[siD + 1] == D_MASS_NONE) {
			return 0;
		}
	}

	return -1;
}

// 実行メイン
int
fMain(
)
{
	int liRet, liWork;
	char lc1Buf[1024];

	// 位置 - 取得
	fgets(lc1Buf, sizeof(lc1Buf), szpFpI);
	sscanf(lc1Buf, "%d%d%d%d%d", &liWork, &siA, &siB, &siC, &siD);
	siA--;
	siB--;
	siC--;
	siD--;

	// マス - 取得
	fgets(sc1Mass, sizeof(sc1Mass), szpFpI);

	// B -> D
	liRet = fChkMove(siB, siD);
	if (liRet < 0) {
		return -1;
	}

	// Bの妨げチェック
	if (liRet < 3) {
		liRet = fChkB();
		if (liRet != 0) {
			return -1;
		}
	}

	// A -> C
	liRet = fChkMove(siA, siC);
	if (liRet < 0) {
		return -1;
	}

	return 0;
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

	// １行出力
	if (liRet == 0) {
		sprintf(lc1Buf, "Yes\n");
	}
	else {
		sprintf(lc1Buf, "No\n");
	}
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

