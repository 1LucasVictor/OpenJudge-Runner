#include <stdio.h>

int main()
{
	int d;	/* 入力一つ目 */
	int n;	/* 入力二つ目 */
	scanf("%d %d", &d, &n);

	/* 100のn乗で割ると割り切れる数を探索する	*/
	/* 例えば0乗であれば整数であればすべて		*/
	/* 1乗なら100の倍数2乗なら10000の倍数となる	*/

	int result;	/* 結果の格納用 */
	if(d == 0){
		result = 1 * n;
	} else if(d == 1) {
		result = 100 * n;
	} else {
		result = 10000 * n;
	}

	printf("%d\n", result);
	return 0;
}