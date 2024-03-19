#include<stdio.h>

int answer (int a, int b){
	int solution[4];
	solution[0] = a*b;
	solution[1] = a-b;
	solution[2] = a+b;
	int ans = 0;
	
	for(int i = 1 ; i < 3 ; i++){
		if(solution[i] > ans){
			ans = solution[i];
		}
	}
	
	return ans;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b); fflush(stdin);
	
	printf("%d", answer(a,b));
	
	return 0;
}