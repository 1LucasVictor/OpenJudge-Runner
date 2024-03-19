#include <stdio.h>
#include <string.h>

int main(){
	char a[20],torikae;
	int len,i;

	scanf("%s",a);
	
	len=strlen(a);

	for(i=0; i<(len/2); i++){
		torikae=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=torikae;

	}

	printf("%s\n",a);

	return 0;
}