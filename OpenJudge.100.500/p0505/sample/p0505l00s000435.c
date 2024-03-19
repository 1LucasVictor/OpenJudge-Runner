// ABC 153-B
// 2020.1.26 bal4u

#include <stdio.h>

#define gc() getchar_unlocked()

int in() {   // 非負整数の入力
	int n = 0, c = gc();
	do n = 10 * n + (c & 0xf); while ((c = gc()) >= '0');
	return n;
}

int main()
{
	int H, N;
	
	H = in(), N = in();
	while (N--) H -= in();
	puts(H <= 0? "Yes": "No");
	return 0;
}
