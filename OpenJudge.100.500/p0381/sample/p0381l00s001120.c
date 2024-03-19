#include <stdio.h>

int main(void) {
	int n, x, i, j, k, cnt;
	
	while(1) {
	    scanf("%d%d", &n, &x);
	    
	    //どちらも0だったら処理を終了する
	    if((n == 0) && (x == 0)) {
	        break;
	    }
	    
	    cnt = 0;
	    for(i = 1; i <= n; i++){
	        for(j = i + 1; j <= n; j++) {
	             for(k = j + 1; k <= n; k++) {
	             	//3つの値の合計がxと同じ場合
	                 if(i + j + k == x) {
	                 	//i,j,kの値が全て異なる場合、カウントする
	             	    if((i != j) && (i != k) && (j != k)) {
	                    	cnt++;
	             	    }
	                }
	            }
	        }
	    }
	    printf("%d\n", cnt);
	}
	return 0;
}
