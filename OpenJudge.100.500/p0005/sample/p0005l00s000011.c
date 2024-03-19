#include <stdio.h>

int main(void)
{
	char buf[21]={}, i;
	scanf("%s", &buf);
	for(i=20; i>=0; i--){
		if(buf[i]){ printf("%c", buf[i]); }
	}
	printf("\n");
    return 0;
}