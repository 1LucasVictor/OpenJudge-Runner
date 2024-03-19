#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int main(void) {
	int N,i;
	scanf("%d",&N);
	for(i=1;i<10;i++){
		if(!(N%i) && (N/i)<10)
		{printf("Yes");return 0;}
	}
    printf("No");
    return 0;
}
