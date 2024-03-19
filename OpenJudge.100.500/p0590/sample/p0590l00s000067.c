#include<stdio.h>
int main(){
	int number[5];
	int k;
	int i , min=123 , max=0;
	for(i = 0 ; i != 5 ; i++){
		scanf("%d" , &number[i]);
		if(number[i] < min) min=number[i];
		if(number[i] > max) max=number[i];
	}
	scanf("%d",&k);
	if(max-min <= k) printf("Yay!\n");
	else printf(":(\n");
	
	return 0;
}