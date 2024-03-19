#include <stdio.h>

int main(void) {
	int card[4][13];
	int n, num;
	char pic;
	
	//二次元配列を0で初期化する
	for(int i = 0; i < 4; i++) {
	    for(int j = 0; j < 13; j++) {
	        card[i][j] = 0;
	    }
	}
	
	//持っているカードの枚数を入力する
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
	    scanf("%c %d", &pic, &num);
	    //該当する箇所の値を1にする
	    //スペード(S)の場合
	    if(pic == 'S') {
	        card[0][num - 1] = 1;
	    }
	    //ハート(H)の場合
	    else if(pic == 'H') {
	        card[1][num - 1] = 1;
	    }
	    //クローバー(C)の場合
	    else if(pic == 'C') {
	        card[2][num - 1] = 1;
	    }
	    //ダイヤ(D)の場合
	    else if(pic == 'D') {
	        card[3][num - 1] = 1;
	    }
	    else{
	    i--;
	    }
	}
	
	//足りないカードを出力する
	for(int i = 0; i < 4; i++) {
	    for(int j = 0; j < 13; j++) {
	        if(card[i][j] == 0) {
	            if(i == 0) {
	                printf("%c %d\n", 'S', j + 1);
	            }
	            else if(i == 1) {
	                printf("%c %d\n", 'H', j + 1);
	            }
	            else if(i == 2) {
	                printf("%c %d\n", 'C', j + 1);
	            }
	            else if(i == 3) {
	                printf("%c %d\n", 'D', j + 1);
	            }
	        }
	    }
	}
	return 0;
}
