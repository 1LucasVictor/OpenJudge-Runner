#include<stdio.h>

int main(){
	int banyak, jumlah;
	int crane = 2;
	int turtle = 4;
	scanf("%d %d", &banyak, &jumlah);
	if(banyak > jumlah || jumlah % 2 == 1 || banyak * 2 > jumlah|| banyak * 4 < jumlah){
		printf("No");
	}
	else{
		printf("Yes");
	}
	
	
	return 0;
	
}