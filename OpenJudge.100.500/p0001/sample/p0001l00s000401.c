#include <stdio.h>
#include <string.h>

int main(){
	int i,j;
	char str[100];

	while(scanf("%d %d",&i,&j) != EOF){
		sprintf(str,"%d",i+j);
		printf("%d\n",strlen(str));
	}

	return(0);
}