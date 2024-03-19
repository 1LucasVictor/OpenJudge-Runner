#include <stdio.h>
#include <string.h>

int main()
{
	char	s[16];
	char	t[16];
	int		n;
	int		len_s,len_t;
	int		errflg=0;
    // 文字列として取得
    scanf("%s",s);
	// 文字列として取得
    scanf("%s",t);
    // 条件判定
	len_s=strlen(s);
	len_t=strlen(t);
	// 小文字判定
	for( n=0;n<len_s;n++ ) {
		if( s[n]<'a' || s[n]>'z' ) {
			errflg=1;
			goto p_output;
		}
	}
	for( n=0;n<len_t;n++ ) {
		if( t[n]<'a' || t[n]>'z' ) {
			errflg=1;
			goto p_output;
		}
	}
	// 文字列長判定
	if( strlen(s)==0 || strlen(s)>10 ) {
		errflg=1;
		goto p_output;
	}
	// 文字列判定
	if( strlen(t)!=strlen(s)+1 || strncmp(s,t,strlen(s)) ) {
		errflg=1;
	}	
p_output:
	printf("%s\n",errflg?"No":"Yes");
    return 0;
}
