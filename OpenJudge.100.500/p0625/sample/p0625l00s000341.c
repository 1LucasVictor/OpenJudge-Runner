#include <stdio.h>

int main()
{
	/* 同じ人がとなり合う二切れのケーキを両方取ってはならない */
	/* つまり食べられるケーキの最高数は8切れである		  */

	int a;	/* 入力一つ目 */
	int b;	/* 入力二つ目 */
	scanf("%d %d", &a, &b);

	if((a < 9) && (b < 9))
		printf("Yay!\n");
	else
		printf(":(\n");

	return 0;
}
