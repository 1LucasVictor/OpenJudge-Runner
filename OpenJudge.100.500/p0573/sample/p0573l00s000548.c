#include<stdio.h>

void main(){
	char string[5];
	scanf("%s",&string);
	int judge=0;
	if(string[0] == string[1]){
		if(string[2] == string[3]){
			if(string[0] != string[2]){
				judge = 1;
			}
		}
	}
	else if(string[0] == string[2]){
		if(string[1] == string[3]){
			if(string[0] != string[1]){
				judge = 1;
			}
		}
	}
	else if(string[0] == string[3]){
		if(string[1] == string[2]){
			if(string[0] != string[1]){
				judge = 1;
			}
		}
	}
	
	if(judge == 1) printf("Yes");
	else printf("No");
}