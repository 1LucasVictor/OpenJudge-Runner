#include <stdio.h>
#define A 1000

int main(void){
	int a[3], count = 0, count2 = 0, i;
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	for (i = 0; i < 3; i++){
		if (a[i] == 5) count++;
		if (a[i] == 7) count2++;
	}
	if (count == 2 && count2 == 1)
		printf("YES\n");
	else
		printf("NO\n");
    return 0;
}