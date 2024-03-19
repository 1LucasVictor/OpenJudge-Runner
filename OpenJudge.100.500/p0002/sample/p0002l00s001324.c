#include <stdio.h>
void judge(int x, int y, int z)
{
	int f = 0;
	if(x * x == y * y + z * z){
		f = 1;
	}else if(y * y == z * z + x * x){
		f = 1;
	}else if(z * z == x * x + y * y){
		f = 1;
	}
	printf( (f == 1) ? ("YES\n") : ("NO\n") );
	return;
}
int main(void)
{
	int n,a,b,c;
	
	scanf("%d", &n);
	while(n--){
		scanf("%d%d%d", &a, &b, &c);
		judge(a,b,c);
	}
	return 0;
}