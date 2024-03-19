#include <stdio.h>
int main(){
	int gohyaku,go,nokori,amari,kekka;
	
	scanf("%d", &nokori);
	gohyaku=nokori/500;
	amari = nokori % 500;
	go = amari / 5;
	kekka = gohyaku * 1000 + go * 5;
		printf("%d\n",kekka);
	
	return 0;
}