#include <stdio.h>

int main(){
	char c[21];
	char a;
	int i=0;

	while(1){
		a=getchar();
		if(a == EOF){
			break;
		}else{
			c[i]=a;
			i++;
		}
	}
	i--;
	while(i>=0){
		printf("%c",c[i]);
		i--;
	}
	puts("\n");
	return 0;
}