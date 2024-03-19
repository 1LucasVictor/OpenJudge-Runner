#include <stdio.h>

int main()
{
	int D, N, ans, step;
  	scanf("%d%d", &D, &N);
  	if (D == 2){
    	ans = 10000 * N;
    } else if (D == 1){
    	step = 100; ans = 0;
      	for (int i = 0; i < N; i++){
        	ans += step;
          	if (ans % 10000 == 0){
            	ans += step;
            }
        }
    } else {
    	step = 1; ans = 0;
      	for (int i = 0; i < N; i++){
        	ans += step;
          	if (ans % 100 == 0){
            	ans += step;
            }
        }
    }
  	printf("%d", ans);
}