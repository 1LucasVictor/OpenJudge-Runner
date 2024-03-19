#include<stdio.h>

	int main(){
		
		int i;
		char str[20]={};
		scanf("%s",str);
		
		for(i=19;i>=0;i--){
			if(str[i]!=0){
				printf("%c",str[i]);
			}
			if(i==0){
				printf("\n");
			}
		}
	
	
	return 0l;
}