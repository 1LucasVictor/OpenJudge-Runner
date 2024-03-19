#include <stdio.h>

int main(void){
	int i,b=0;
	char  a[3];
	scanf("%s",a);

	for (i = 0; i < 3; i++){
		if (a[i] - '0' == 1) b++;
	}
	printf("%d\n", b);
	return 0;
}