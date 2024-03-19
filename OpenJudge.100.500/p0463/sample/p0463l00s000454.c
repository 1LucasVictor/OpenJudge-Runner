#include <float.h>
#include <inttypes.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#ifdef __cplusplus
#include <bits/stdc++.h>
#endif

uint32_t nextpint(void){ char c=getchar_unlocked(); while(c<'0'||'9'<c) c=getchar_unlocked(); uint32_t x=0; while('0'<=c && c<='9'){ x=x*10+c-'0'; c=getchar_unlocked(); } return x; }

int main(void){
	char c, C;
	while((C=getchar())!=10){
		c=C;
	}
	if(c=='3'){
		putchar_unlocked('b');
	}else if(c=='0'||c=='1'||c=='6'||c=='8'){
		putchar_unlocked('p');
	}else{
		putchar_unlocked('h');
	}
	putchar_unlocked('o');
	putchar_unlocked('n');
	putchar_unlocked(10);
}
