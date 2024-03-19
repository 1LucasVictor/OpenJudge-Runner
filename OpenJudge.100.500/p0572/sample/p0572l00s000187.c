#include <stdio.h>
int main(void){
	int L, R, min = 2018;
    scanf("%d %d", &L, &R);
    for(int i = L; i < R; i++){
    	for(int j = i + 1; j <= R; j++){
        	if((i * j) % 2019 < min) min = (i * j) % 2019;
        }
    }
    printf("%d", min);
    return 0;
}
          