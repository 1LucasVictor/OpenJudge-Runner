#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
/********************************************************************************************************************************/
/* main *************************************************************************************************************************/
/********************************************************************************************************************************/
int DEBUG = 1;										/* デバッグプリント 提出時は0 */
int main()
{
	int		s, ans = 0;
	char	a[5];
	scanf("%s", &a);

	for(s=0;s<3;s++) {
		if ((a[s] == a[s+1])) ans = 1;
	}
	if (ans == 1) printf("Bad\n");
	else printf("Good\n");



	return 0;
}