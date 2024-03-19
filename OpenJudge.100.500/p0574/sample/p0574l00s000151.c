#include<stdio.h>
int main()
{

	typedef char str[1024];
	str input;

	scanf("%c",&input);

	if(input[0]==input[1]||input[1]==input[2]||input[2]==input[3]){
		printf("Bad");
	}else{
		printf("Good");
	}
}