#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include<ctype.h>


int main(){
	int N;
	scanf("%d",&N);
	
	
	int number = N % 10;
	
	int NUMBER = (N-number)  %100;
	
	int BUN = (N-NUMBER-number);
	
	if(number != 7 && NUMBER !=70 && BUN != 700) {
		printf("No");
		return 0;
	}
	printf("Yes");
	
	
	
	return 0;
	
}