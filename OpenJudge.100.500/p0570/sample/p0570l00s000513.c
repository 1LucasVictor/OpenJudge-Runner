#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, i, ret_scanf;
	int iFind;
	
	iFind = 0;
    // フォーマットに従って標準入力から入力
    ret_scanf = scanf("%d %d ", &a, &b);
    
    for (i = 0; i < 100000; i++) {
    	if (abs(a - i ) == abs(b - i) ) {
    		iFind = 1;
    		break;
    	}
    }
    if (iFind == 1) {
    	printf("%d", i);
    } else {
    	printf("IMPOSSIBLE");
    }
    return 0;
}