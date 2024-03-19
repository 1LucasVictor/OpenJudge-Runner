#include <stdio.h>
#include <string.h>

int main(void){
    int a, b;
    char buf[256];

    while(scanf("%d %d", &a, &b) != EOF) {
        sprintf(buf, "%d", a+b);
        printf("%d\n", strlen(buf));
    }
	return(0);
}