#include <stdio.h>

int main(void){
	int N;
	while(scanf("%d", &N) == 1){
		printf("%d\n",RecurFun(N,4));
	}
	
	return 0;
}

int RecurFun(int N, int Available){
	if(Available == 1)
		return (0 <= N && N < 10)? 1 : 0 ;
	if(N < 0)
		return 0;
	
	int i;
	int Sum = 0;
	for(i = 0; i < 10; i++){
		Sum += RecurFun(N-i,Available-1);
	}
	
	return Sum;
}