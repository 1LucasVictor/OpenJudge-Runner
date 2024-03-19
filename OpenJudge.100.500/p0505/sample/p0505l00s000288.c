#include <stdio.h>

int main() {
	int H;
	int N;
	
	scanf("%d", &H);
	scanf("%d", &N);
	
	
	for(int i = 0; i<N; i++){
		int A;
		scanf("%d", &A);
		H -=A;
		
	}
	if(H<=0)
	puts("Yes");
	else
	puts("No");
	
  return 0;
}