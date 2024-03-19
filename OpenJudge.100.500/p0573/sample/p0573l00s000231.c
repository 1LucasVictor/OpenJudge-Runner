#include <stdio.h>

int main(void)
{
	char s[5];

	scanf("%s", s);

	if (s[0] == s[1] && s[1] != s[2] && s[2] == s[3]) {//1文字目と2文字目、3文字目と4文字目が同じ
		printf("Yes\n");
	}
	else if (s[0] == s[2] && s[2] != s[1] && s[1] == s[3]) {//1文字目と3文字目、2文字目と4文字目が同じ
		printf("Yes\n");
	}
	else if (s[0] == s[3] && s[3] != s[1] && s[1] == s[2]) {//1文字目と4文字目、2文字目と3文字目が同じ
		printf("Yes\n");
	}
	else {//条件に合わない
		printf("No\n");
	}

	return 0;
}