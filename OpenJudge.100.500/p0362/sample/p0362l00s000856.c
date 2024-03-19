#include <stdio.h>
//#define scanf scanf_s
typedef long long int lli;

// ITP1_2_B
// 3整数a,b,cを読み込み、a<b<cを満たすなら"Yes"、満たさないなら"No"を出力
int main()
{
	int iInputA,iInputB, iinputC;
	scanf("%d %d %d", &iInputA, &iInputB, &iinputC);

	if (iInputA < iInputB && iInputB < iinputC) {
		printf("Yes\n");
		return 0;
	}

	printf("No\n");

	return 0;
}
