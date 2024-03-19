#include <stdio.h>

int main(void) {
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e = b - c - a;
    if(e < 0){
        e = 0;
    }
    printf("%d\n",e);
	return 0;
}