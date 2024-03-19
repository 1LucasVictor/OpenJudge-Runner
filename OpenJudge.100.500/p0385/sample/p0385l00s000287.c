#include<stdio.h>
#include<string.h>

int main(){
	
	int i, sum=0;
	char number[1000];
	
	while(1){
		scanf("%s",number);
		
		if(number[0]=='0')break;
		
		for(i=0;number[i]!='\0';i++){
			sum+=(number[i]-'0');
		}
		
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}