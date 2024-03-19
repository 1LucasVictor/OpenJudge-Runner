#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char input[202];
char temp[101];
void PrintCard(char input[]){
	int cardLen;
	cardLen = strlen(input);
	int i;
	for(i = 0 ; i < cardLen ; i++){
		printf("%c", input[i]);
	}
	printf("\n");
}
void putTemp(char input[], int numberShuffle){
	int i;
	for(i = 0 ; i < numberShuffle ; i++){
		temp[ i ] = input[ i ];
	}
}
void backToFront(char input[],int numberShuffle){
	int i ;
	int k = 0 ;
	int lastIndex = strlen(input)-1;
	for(i = numberShuffle ; i <= lastIndex ; i++){
		input[ k ] = input[ i ];
		k++;
	}
}
void tempToInput(char input[], char temp[], int numberShuffle){
	int i;
	int k = 0;
	int lastIndex = strlen(input)-1;
	for(i = strlen(input) - numberShuffle ; i <= lastIndex ; i++){
		input[ i ] = temp[ k ];
		k++;
	}
}
void Shuffle(char input[], int numberShuffle){
	int lastIndex = strlen(input)-1;
	putTemp(input, numberShuffle);
	backToFront(input, numberShuffle);
	tempToInput(input, temp, numberShuffle);
} 




int main(){
	int numberShuffle;
	int shuffleTimes;
	int i ;
	while(1){
		scanf("%s", &input);
		if(strcmp(input, "-") == 0){
			return 0 ;
		}
		scanf("%d", &shuffleTimes);
		for(i = 0 ; i < shuffleTimes ; i++){
			scanf("%d", &numberShuffle);
			Shuffle(input, numberShuffle);
			temp[202] = NULL;
		}
		PrintCard(input);
		input[202] = NULL;
		
	}
	return 0 ;
}
