#include <stdio.h>
#include<string.h>
char exchange(char c) {
	if('A' <= c && c <= 'Z') {
    	return c + ('a' - 'A');
	}
  /* 同様に c が小文字なら大文字に変換する条件を追加 */
	else if ('a' <= c && c <= 'z') {
		return c - ('a' - 'A');
	}
	return c;
}

int main(void) 
{
	int i, len;
	char s[4096];  /* 1200バイト以上 */
  // scanf("%s", s) は セキュリティ上よろしくない
	fgets(s, sizeof(s), stdin);
	len = strlen(s);   // 文字列の長さをえる
	for(int i = 0; i < len;i++) {
    	s[i] = exchange(s[i]);
	}
	printf("%s",s);
	return 0;
}

