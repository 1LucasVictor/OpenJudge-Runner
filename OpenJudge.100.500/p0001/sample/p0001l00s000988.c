#include <stdio.h>
#include <string.h>
int main(){
	int n, m;
	char buf[100];
	while(scanf("%d %d", &n, &m) != EOF){
		sprintf(buf, "%d", n + m);
		printf("%d\n", strlen(buf));
	}
	return 0;
}