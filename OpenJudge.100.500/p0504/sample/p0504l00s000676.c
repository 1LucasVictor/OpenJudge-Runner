#include <stdio.h>

int main (){
	int H, A;
	scanf("%d %d", &H, &A);
	int kali = 0;
	
	while (H >= 0){
		H = H - A; // 6 - 4 = 2
		kali++; // 1
	}	
	printf("%d", kali);
	
//	int kali = ceil ((double) H / (double) A);
//	printf("%d", kali);
	return 0;
}