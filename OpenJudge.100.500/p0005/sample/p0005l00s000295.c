#include<stdio.h>
#include<string.h>

int main(){
	int i,len;
	char io[22],xio[22];
	fgets(io,sizeof(io),stdin);
	len=strlen(io)-1;
	io[len]='\0';
	for(i=0;i<len;i++){
		xio[len-1-i]=io[i];
	}
	xio[i]='\0';
	for(i=0;i<len;i++){
		printf("%c",xio[i]);
	}
	return 0;
}