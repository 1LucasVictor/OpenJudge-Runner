#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
void solve(void)
{
	int x,a,b;
	scanf("%d %d %d", &x, &a, &b);
	if(b-a>x){
		printf("dangerous\n");
	} else if(b-a>0){
		printf("safe\n");
	} else {
		printf("delicious\n");
	}
}
int main(int argc, char **argv)
{
	solve();
	return 0;
}
