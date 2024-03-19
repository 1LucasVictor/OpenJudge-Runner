#include <stdio.h>

main() {
	int a, b; scanf("%d%d", &a, &b);
  	if(9-a>=0 && 9-b>=0 && a>=1 && b>=1) printf("%d", a*b);
  	else printf("-1");
}