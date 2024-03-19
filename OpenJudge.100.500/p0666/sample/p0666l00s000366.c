#include "stdio.h"

int main()
{
    int x,a,b;
    //char s[101];
    // 整数の入力
    scanf("%d %d %d", &x,&a,&b);

	if (b <= a) {
		printf("delicious");
	} else if (b > a && b <= a + x) {
		printf("safe");
	} else {
		printf("dangerous");
	}
	//scanf("%s",s);
    return 0;
}