#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define U1 unsigned char
#define S1 char
#define	S4 int

#define MAX_LENGTH (21)  /* ヌル文字込みの最大入力文字数 */

S4 main()
{
	U1 u1_tp_input[MAX_LENGTH];		/* 反転したい文字列 */
	S1 s1_t_idx;					/* 文字列反転処理で処理中の文字を指すインデックス */
	U1 u1_t_strLength;				/* 文字列の長さ */

	/* 入力 */
	scanf("%s", u1_tp_input);

	/* 文字列の長さを計算 */
	u1_t_strLength = (U1)strlen((const char*)u1_tp_input);

	/* 末尾から先頭に向かって文字を出力 */
	for (s1_t_idx = (S1)u1_t_strLength; s1_t_idx > (S1)0; s1_t_idx--)
	{
		printf("%c", u1_tp_input[s1_t_idx - 1]);
	}
	printf("\n");

	return((S4)0);
}

