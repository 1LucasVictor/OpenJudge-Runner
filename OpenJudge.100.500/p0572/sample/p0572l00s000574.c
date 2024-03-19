#include <stdio.h>
int main(void){
	int L, R, min = 2018, l, r;
    scanf("%d %d", &L, &R);
  	l = L % 2019;
  	r = R % 2019;
  	if(R - L >= 2019){
      printf("0\n");
      return 0;
    }
  	if(l > r) {
      l = R % 2019;
      r = L % 2019;
    }
    for(int i = l; i < r; i++){
    	for(int j = i + 1; j <= r; j++){
        	if((i * j) % 2019 < min) min = (i * j) % 2019;
        }
    }
    printf("%d", min);
    return 0;
}
          
    