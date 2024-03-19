#include<stdio.h>
int main(){
	char S[5];
	scanf("%s",S);
	int flag = 0;
	for(int i = 0; i < 3; i++){
		if(S[i] == S[i+1])
		{
			flag =1;
			break;
		}
	}
	printf("%s", flag? "Bad":"Good");




}
