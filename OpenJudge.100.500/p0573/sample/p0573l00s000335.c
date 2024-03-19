#include<stdio.h>
#include<stdlib.h>

char S[10];

int comp(const void* a, const void* b){
	if(*(char*)a-*(char*)b>0){
    	return 1;
    }else if(*(char*)a-*(char*)b == 0){
    	return 0;
    }else{
    	return -1;
    }
}

int main(void){
  	scanf("%4s", S);
  	qsort(S, 4, sizeof(char), comp);
  	if(S[0]==S[1] && S[2]==S[3] && S[1]!=S[2]){
    	printf("Yes");
    }else{
    	printf("No");
    }
  	return 0;
}
