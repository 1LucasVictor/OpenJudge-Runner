#include <stdio.h>
#include <string.h>

int main(){
	int i, len, cnt=0;
	char str[32], str2[32]; // 20文字だから、これくらい

	scanf("%s", str);

	len = strlen(str);
	for(i=len-1; i>-1; i--){
		str2[cnt++] = str[i];
	}
	// 文字列の末尾には、必ずヌル文字\0 を入れる。
	str2[cnt] = '\0';

	printf("%s\n", str2);

	return 0;
}