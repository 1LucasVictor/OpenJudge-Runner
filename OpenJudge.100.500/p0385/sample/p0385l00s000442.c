#include<stdio.h>

int main (void){
	
	int num=0,i,count=0,n;
	char number[1001]={0};

	while(1){
		scanf("%s",number);
		if(number[0] == '0')break;
		num = 0;
		
		for(i=0;number[i] != '\0';i++){
			num += number[i]-'0' ;
		}
	printf("%d\n",num);
	}
}