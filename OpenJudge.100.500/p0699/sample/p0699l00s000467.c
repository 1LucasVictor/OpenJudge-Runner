#include <stdio.h>
void solve(void)
{
	int a,b,c;
	int x[11]={0};
	scanf("%d %d %d", &a, &b, &c);
	++x[a];
	++x[b];
	++x[c];
	if(x[5]==2 && x[7]==1){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
int main(int argc, char **argv)
{
	solve();
	return 0;
}
