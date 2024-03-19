#include <stdio.h>

int min(int A, int B){
	return A>B ? B : A;
}

int main(){
	int tmp;
  	int ans;
  	int A, B, C, K;
  
  	scanf("%d%d%d%d", &A, &B, &C, &K);
  
  	ans = 0;
    //A
  	tmp = min(A, K);
    K -= tmp;
    ans += tmp;
  	//B
  	tmp = min(B, K);
  	K -= tmp;
  	//C
  	tmp = min(C, K);
  	K -= tmp;
  	ans -= tmp;
  
  	printf("%d\n", ans);
  
  	return 0;
}