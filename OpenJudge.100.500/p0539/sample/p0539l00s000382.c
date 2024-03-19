#include<stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	int test;
	for (int i = 0 ; i <= 9 ; i++){
		for (int j = 0 ; j <= 9 ; j++){
			if(i * j ==num){
				test++;
				}
			}
		}
	
	if (test != 0){
		printf("Yes");
	}else {
		printf("No");
	}
    return 0;
}