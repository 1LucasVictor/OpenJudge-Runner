#include<stdio.h>

int main(void){
	char sta[3];
	for(int i=0;i<3;i++){
		scanf("%c",&sta[i]);
	}
	if(sta[0]==sta[1]&&sta[1]==sta[2]){
		printf("No");
		return 0;
	}
	printf("Yes");
}