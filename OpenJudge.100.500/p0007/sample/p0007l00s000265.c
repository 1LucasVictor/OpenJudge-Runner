#include <stdio.h>

/* prototype declaration */
int getCombi(int n);

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
	int a, b, c, d, cnt = 0;
	
	for(a=0; a<10; a++){
		for(b=0; b<10; b++){
			for(c=0; c<10; c++){
				for(d=0; d<10; d++){
					if(a+b+c+d == n) cnt++;
				}
			}
		}
	}
	
	return cnt;
}