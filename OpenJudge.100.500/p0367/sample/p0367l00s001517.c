#include <stdio.h>

int main(void) {
	int a, b, c, cnt;
	
	scanf("%d%d%d", &a, &b, &c);
	
	if(a <= b){
	    cnt = 0;
	    //aからbまでの間にcの約数がいくつあるかを数える
	    for(; a <= b; a++) {
	        //aがcの約数だったらカウントする
	        if(c % a == 0) {
	             cnt++;
	        }
	    }
	    
	    printf("%d\n", cnt);
	}
	return 0;
}
