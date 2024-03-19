#include<stdio.h>
#include<stdlib.h>

int main(void){
	char str[1000000];
	scanf("%s",str);

	int i;
	int count0 = 0,count1 = 0;

	for(i=0;str[i]!='\0';i++){
		if(str[i] == '0')count0++;
		if(str[i] == '1')count1++;
	}
	printf("%d\n",(count0>count1)?(count1 * 2):(count0 * 2));

	return 0;
}