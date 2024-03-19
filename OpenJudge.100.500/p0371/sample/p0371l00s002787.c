#include <stdio.h>
 
int main(void){
 
    int i, j, max = -100000000, min = 100000000, sum = 0, a;
    scanf("%d", &i);
	for(j=0; j < i; j++){
		scanf("%d", &a);
		if(a >= max) max = a;
		if(a <= min) min = a;
		sum = sum + a; 
	}
	printf("%d %d %ld\n", min, max, sum);
		
    return 0;
 
}