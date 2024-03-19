#include<stdio.h>
#include<ctype.h>

int main(){
	char mozi[1200];
	int i=0;
	
	fgets(mozi,sizeof(mozi),stdin);
	while(mozi[i]!='\0'){
		if(isupper(mozi[i])){
			mozi[i]=tolower(mozi[i]);
		}
		else if(islower(mozi[i])){
			mozi[i]=toupper(mozi[i]);
		}
		printf("%c",mozi[i]);
		i++;
	}
	
	return 0;
}