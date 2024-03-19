#include<stdio.h>

int main(){
  	int S[4];
  	//int n[4];
  	for(int i = 0; i < 4; i++){
    	scanf("%1d\n",&S[i]);
    }
  	for(int i = 0; i < 3; i++){
    	if(S[i] == S[i+1]){
        	printf("Bad\n");
          	return 0;
        }
    }
  	printf("Good\n");
	return 0;
}