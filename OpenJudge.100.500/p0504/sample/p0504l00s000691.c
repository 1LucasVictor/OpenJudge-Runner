#include <stdio.h>

int main() {
	int H, A, jumlah;
	scanf("%d %d", &H, &A);
	
	jumlah=H%A;
	jumlah!=0 ? jumlah=jumlah+1 : printf("%d", jumlah);
	
	printf("%d", jumlah);
	
	return 0;
}