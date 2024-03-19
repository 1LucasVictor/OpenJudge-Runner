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
	int		a,b,c,i,j,k,n,m,x,y,ans = 0;
	char	s[5];
	int		al[27]={0};

	scanf("%s", s);
	for(i=0;i<4;i++) {
		al[s[i]-'A']++;
	}
	for(i=0;i<27;i++) {
		if ((al[i]!=0)&&(al[i]!=2)) {
			printf("No\n");
			return 0;
		}
	}
		
	printf("Yes\n");

	return 0;
}
