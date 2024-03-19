#include<stdio.h>

#include<string.h>

int main(){

	char s[11]="";

	char t[12]="";

	scanf("%s",s);
	scanf("%s",t);


	if(strncmp(s,t,strlen(s))==0){
		int S,T;
		S=strlen(s);
		T=strlen(t);
		if(S+1==T){
			printf("Yes");
		}else{
			printf("No");
		}



		
	}else{
		printf("No");
	}



	return 0;
		
}	
