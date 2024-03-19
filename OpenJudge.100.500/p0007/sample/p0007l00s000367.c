#include <stdio.h>

/* prototype declaration */
int getCombi(int n);
int match(int a, int b, int c, int d);

/* main */
int main(int argc, const char *argv[])
{
	int n;
	while(scanf("%d", &n) != EOF)
		printf("%d\n", getCombi(n));
	return 0;
}

int getCombi(int n)
{
	/* 
	 * a + b + c + d = n について、
	 * 0 <= a <= b <= c <= d <= 9 と仮定しておき、(a, b, c, d)を求める。
	 * 並べ方は、
	 * 重複する数字が、
	 *  0個 ... 4! = 16
	 *  1個 ... 4!/2!1!1! = 12
	 *  2個 ... 4!/2!2! = 6
	 *  3個 ... 4!/3! = 4
	 *  4個 ... 4!/4! = 1
	 * であることに注意
	 */

	int a, b, c, d, cnt = 0;
	for(a=0; a<10; a++){
		for(b=a; b<10; b++){
			for(c=b; c<10; c++){
				for(d=c; d<10; d++){
					if(a+b+c+d == n){
						switch(match(a, b, c, d)){
						case 0:
							cnt += 16;
							break;
						case 1:
							cnt += 12;
							break;
						case 2:
							cnt += 6;
							break;
						case 3:
							cnt += 4;
							break;
						case 4:
							cnt++;
							break;
						}
					}
				}
			}
		}
	}
	return cnt;
}

/* 仮定: a <= b <= c <= d */
int match(int a, int b, int c, int d)
{
	if(a == b && b == c && c == d) return 4;
	else if((a == b && b == c) || (b == c && c == d)) return 3;
	else if(a == b && c == d) return 2;
	else if(a == b || b == c || c == d) return 1;
	else return 0;	
}