#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a, b)	(((a) > (b)) ? (a) : (b))		/* ２個の値の最大値 */
#define min(a, b)	(((a) < (b)) ? (a) : (b))		/* ２個の値の最小値 */
#define ENTER		printf("\n")					/* 改行プリント */
int DBG = 1;										/* デバッグプリント 提出時は0 */
/* main *************************************************************/
int main()
{
	int		a,b,c,i,j,k,n,m,x,y;
	char	str[256];
	double  ans;
	
	scanf("%d %d", &a , &b);
 
	if ( (a >= 1) && (a <=9) && (b >= 1) && (b <=9) ) {
		printf("%d\n",a*b);
	} else {
		printf("-1\n");
	}
 
	return 0;
}