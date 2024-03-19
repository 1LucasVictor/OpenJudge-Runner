#include <stdio.h>
#define DEB 100000

int main()
{
	int n;
	int deb = DEB;
	
	scanf("%d", &n);
	for(; n>0; n--){
		deb += deb * 0.05;
		deb = (deb-1) - (deb-1)%1000 + 1000;
	}
	printf("%d\n", deb);
	
	return 0;
}