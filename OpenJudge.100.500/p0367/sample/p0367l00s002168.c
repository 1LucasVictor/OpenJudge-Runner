#include<stdio.h>
int main(void) {
	int x, y, z,i,ans = 0;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	scanf("%d%d%d", &x, &y,&z);
	for(i = 0;i <= y -x;i++){
		if (z % (x + i) == 0) {
			ans++;
		}
	}
	printf("%d\n", ans);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	return 0;
}