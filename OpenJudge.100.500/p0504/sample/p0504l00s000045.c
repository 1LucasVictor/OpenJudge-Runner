#include <stdio.h>

int main(void){
	char buf[100];
	fgets(buf, sizeof(buf), stdin);
  	int n, m;
  	sscanf(buf, "%d %d", &n, &m);
  	printf("%d", (n + m - 1) / m);
}