#include <stdio.h>
int main(){
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	puts(x<y&&y<z?"Yes":"No");
	return 0;
}
