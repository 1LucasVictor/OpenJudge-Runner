#include <stdio.h>
#include <string.h>
int main(void) 
{
	int i, len;
	char s[4096];  /* 1200バイト以上 */
	for(i = 0; i < 4096; i++) {
    		int ans = 0;
    		scanf("%s", s); // セキュリティ上よろしくないけど仕方がない
    		if (s[0] == '0')
			break;
    		len = strlen(s);   // 文字列の長さをえる
    		for(i = 0; i < len; i++) {
    			ans += s[i] - '0';
    		}
    		printf("%d\n", ans);
	}

	return 0;
}

