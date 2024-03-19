#include <stdio.h>

int main(void)
{
	int a[4][13];
	int c, b, ab;
	char d;
		
	for(c = 0; c < 13; c++){
		a[0][c] = c + 1;
		a[1][c] = c + 1;
		a[2][c] = c + 1;
		a[3][c] = c + 1;
	}
	
		
		
    
	
	scanf("%d", &b);
	
	for(c = 0; c < b; c++){
		scanf("%s %d", &d, &ab);
		if(d == 'S'){
			a[0][ab-1] = 0;
		}
		if(d == 'H'){
			a[1][ab-1] = 0;
		}
		if(d == 'C'){
			a[2][ab-1] = 0;
		}
		if(d == 'D'){
			a[3][ab-1] = 0;
		}
	}
	
	for(c = 0; c < 13; c++){
		if(a[0][c] != 0){
			printf("S %d\n", a[0][c]);
		}
	}
	for(c = 0; c < 13; c++){
		if(a[1][c] != 0){
			printf("H %d\n", a[1][c]);
		}
	}
	for(c = 0; c < 13; c++){
		if(a[2][c] != 0){
			printf("C %d\n", a[2][c]);
		}
	}
	for(c = 0; c < 13; c++){
		if(a[3][c] != 0){
			printf("D %d\n", a[3][c]);
		}
	}
	
	
	
	
	
	
	return (0);
}