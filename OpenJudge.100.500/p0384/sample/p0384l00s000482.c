#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1200

int func(char s){
	int d = (s);

	if((d >= 65) && (d <= 90)){
		return (d+32);
	}else if((d >=97) && (d <= 122)){
		return (d-32);
	}

	return d;
}

void calc(char s[N]){
	int count=0;
	
	for(int i=0;i<N;i++){
		s[i] = (func(s[i]));
	}

}

int main(void){
	char s[N];

	scanf("%[^\n]s",s);

	calc(s);


	printf("%s\n",s);
	//getchar();
}
