#include <stdio.h>

int main (){
	
	int N;
	scanf("%d", &N);
	
	int num1 = N/100;
	int num2 = (N/10) %10;
	int numb3 = N%10;
	
	while (N>0){
		if (num1 == 7){
			puts ("Yes\n");
		}
		else if (num2 == 7){
			puts ("Yes\n");
		}
		else if (numb3 == 7){
			puts ("Yes\n");
		}
		else {
			puts ("No\n");
		}
		break;
	}
	
		

	return 0;
}