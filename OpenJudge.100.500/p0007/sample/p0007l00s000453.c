/*
	http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008
	Sum of 4 Integers
*/

#include <stdio.h>
int main(void)
{
	int n,a,b,c,d,sum,count;
	while (scanf("%d",&n) != EOF){
		count = 0;
	/* ??????????????????????????? */
		for (a = 0; a <= 9; ++a){
			b = 0;
			for (b = 0; b <= 9; ++b){
				c = 0;
				for (c = 0; c <= 9; ++c){
					d = 0;
					for (d = 0; d <= 9; ++d){
						sum = a + b + c + d;
						if(n == sum) count++;
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		printf("%d\n",count);
		}
	return 0;
}