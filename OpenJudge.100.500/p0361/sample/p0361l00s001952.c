#include <stdio.h>
#include <stdlib.h>

// ITP1_1_D
// 秒で与えられる入力をh:m:sの形式に変換して出力
int main()
{
	int iInputS;
	int iHours;
	int iMinutes;
	int iSeconds;

	scanf("%d", &iInputS);
	iHours = iInputS / (60 * 60);
	iInputS = iInputS % (60 * 60);
	iMinutes = iInputS / 60;
	iSeconds = iInputS % 60;

	printf("%d:%d:%d\n", iHours, iMinutes, iSeconds);

	return 0;
}
