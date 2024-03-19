#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,len;
	char io[21],xio[21];
	fgets(io,sizeof(io),stdin);
	len=strlen(io)-1;
	io[len]='\0';
	for(i=0;i<len;i++){
		xio[len-1-i]=io[i];
	}
	xio[i]='\0';
	printf("%s\n",xio);
	return 0;
}